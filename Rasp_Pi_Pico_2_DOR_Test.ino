#include <Arduino.h>
#include <hardware/xosc.h>
#define HELLO_LED 22
#define GPIO_EXIT_DORMANT_MODE 3 /* connect GP3 to GND once to exit from DORMANT mode */
#define GPIO_START_DORMANT_MODE 0 /* connect GP0 to GND to enter DORMANT mode*/
int buttonState;

void setup() {
  Serial1.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(HELLO_LED, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(HELLO_LED, HIGH);
  pinMode(GPIO_START_DORMANT_MODE, INPUT_PULLUP); 
  pinMode(GPIO_EXIT_DORMANT_MODE, INPUT_PULLUP); // pull pin that will get us out of sleep mode
  buttonState = 1;
}


void loop() {
  buttonState = digitalRead(GPIO_START_DORMANT_MODE);
  if (buttonState == LOW) {
    enterDormantMode();
  }
  digitalWrite(HELLO_LED, HIGH);
  delay(100);
  digitalWrite(HELLO_LED, LOW);
  delay(100);
  buttonState = 1;
}

void enterDormantMode(){
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(HELLO_LED, HIGH);
  delay(50); //Newly added for testing
  gpio_set_dormant_irq_enabled(GPIO_EXIT_DORMANT_MODE,
      IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_EDGE_LOW_BITS, true);
  systick_hw->csr &= ~1;
  xosc_dormant();
  gpio_acknowledge_irq(GPIO_EXIT_DORMANT_MODE,
      IO_BANK0_DORMANT_WAKE_INTE0_GPIO0_EDGE_LOW_BITS);
  systick_hw->csr |= 1;
  digitalWrite(LED_BUILTIN, LOW);
}    
