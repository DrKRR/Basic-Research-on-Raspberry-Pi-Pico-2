# Basic-Research-on-Raspberry-Pi-Pico-2
Raspberry Pi Pico 2, introduced by Raspberry Pi foundation had new features incorporated in the microcontroller: RP2350. Some of these features include the following:
* Dual ARM Cortex-M33 cores, an upgrade of M0+ cores of RP2040
* Dual RISC-V cores named: Hazard3 designed in-house by Luke Wren
* Enhanced clock speed (150MHz) and on-chip SRAM (520kB)
* 4MB QSPI on-board flash
* 26 Digital I/Os (3V3 Logic), 4X12-bit ADC, 2XUART, 2XI2C, 2XSPI, 24XPWM
* Three PIO blocks with 12 state machines that provide flexible interfacing for sensors and actuators with no overload on CPU
* Two timers with four alarms and one AON (Always ON) timer
* ARM Trust Zone security for Cortex-M33, look after hardware mitigations for fault injection attacks
* Hardware SHA256 accelarator with optional boot signing, enforced by on-chip mask ROM (8KB) with key finger print on OTP
* Low power modes and swithing between two architectures with same foot print as that of Raspberry Pi Pico board
* There is no Wireless and Bluetooth connections on Raspberry Pi Pico 2
