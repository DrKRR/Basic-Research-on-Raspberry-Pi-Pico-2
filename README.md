# Basic-Research-on-Raspberry-Pi-Pico-2
Raspberry Pi Pico 2, introduced by Raspberry Pi foundation had new features incorporated in the microcontroller: RP2350. Some of these features include the following [Ref](https://www.raspberrypi.com/news/whats-new-in-pico-2/):
* Dual ARM Cortex-M33 cores, an upgrade of M0+ cores of RP2040
* Dual RISC-V cores named: Hazard3 designed in-house by Luke Wren
* Possible to switch from one core to another
* Enhanced clock speed (150MHz) and on-chip SRAM (520kB)
* 4MB QSPI on-board flash
* 26 Digital I/Os (3V3 Logic), 4X12-bit ADC, 2XUART, 2XI2C, 2XSPI, 24XPWM
* Three PIO blocks with 12 state machines that provide flexible interfacing for sensors and actuators with no overload on CPU
* Two timers with four alarms and one AON (Always ON) timer
* ARM Trust Zone security for Cortex-M33, look after hardware mitigations for fault injection attacks
* Hardware SHA256 accelarator with optional boot signing, enforced by on-chip mask ROM (8KB) with key finger print on OTP
* Low power modes with the same foot print as that of Raspberry Pi Pico board
* There is no Wireless and Bluetooth connections on Raspberry Pi Pico 2<br>

The only disadvantage which is the last point in the above, has been overcome by the introduction of Raspberry Pi Pico 2W on 25<sup>th</sup> Nov 2024 costing only 7$. Some of the related figure available on web pages are given below:<br>
<p align="center"><img src="https://github.com/user-attachments/assets/75e6e8fb-8b5e-4791-bd3f-c9c389335263"width="234"height="540">
     <img src="https://github.com/user-attachments/assets/8dababa9-bcb2-410d-922d-98e4ab078652"width="234"height="540">
           <img src="https://github.com/user-attachments/assets/05f1e72b-67bb-441f-891d-e06bb1d485af"width="234"height="540"></p>

## Experiment on Dormant State of Raspberry Pi Pico 2
The hardware circuit diagram to carry out the study on the Dormant mode of Raspberry Pi Pico 2 is shown below:<br>
[Maxmilian Gerhardt work is the motivation](https://github.com/earlephilhower/arduino-pico/issues/2528)
<p align="center"><img src="https://github.com/user-attachments/assets/ef1d2933-f4c9-4c3b-a1cc-de8d4fa38954"width="450"height="540">


Before opening the Arduino IDE, it is a good idea to erase the on-chip flash of RP2350 (May be perhaps it would have been used for MicroPython program development). Connect the Raspberry Pi Pico 2 board to the computer. Once the board is connected to the computer via USB cable, a RP2350 drive (d:) appears on the screen with a couple of files. To erase the flash drag and drop the file: flash_nuke.uf2[(REF)](https://raspberrypi.com/documentation/microcontrollers/pico-series.html#resetting-flash-memory). Automatically, erase takes place with a momentary transition of the monitor screen. Now, open the Arduino IDE and go to the Files menu and select Preferences. Add to the [path](https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json). Go to the Tools and select the Boards Manager. Select Raspberry pi Pico 2. Select the COM port to which the board is connected. Load the Arduino program that is attched as a file in this repository (***Rasp_Pi_Pico_2_DOR_Test.ino***). Verify/Compile the file without errors. Now load the program on to the Pico 2 board. Successful program execution will show the following screen shot:<br>
<p align="center"><image src="https://github.com/user-attachments/assets/41389e1e-f05c-47e8-ba72-f85800abb8b3"width="720"height="540">

Photographs of the experimental circuit and current measured by DMM are shown below, and the measured experimental currents drawn by the RPi2 board with 5V and 3.3V connected to V<sub>SYS</sub> are given in the following tables:<br>
<p align="center"><img src="https://github.com/user-attachments/assets/5d39b2af-07ad-4b79-a898-c9e6ae97706a"width="360"height="540">
     <img src="https://github.com/user-attachments/assets/e00df3a3-115c-4915-8801-a628c42f3944"width="360"height="540"></p>

   <p align="center"><img src="https://github.com/user-attachments/assets/636e78d2-eb8e-46bd-bbae-4a160fa86362"width="360"height="540">
        <img src="https://github.com/user-attachments/assets/9f45b625-4bbc-4123-88e2-90495b345db1"width="360"height="540"></p> 

> [!NOTE]
I could not get the Schottky diode (PMEG8010ELR) mentioned in Raspberry Pi Pico2 Datasheet.<br>
The datasheet mentions that this diode is must. In my case I have powered the board using [external USB power bank](https://github.com/DrKRR/Build-Your-own-Power-Bank-for-your-Travel-and-IoT-Projects)









