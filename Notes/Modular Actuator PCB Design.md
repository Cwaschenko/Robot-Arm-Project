# Modular Actuator PCB Design
---
 this PCB will be expected performable functions :

>- the movement of the actuator
>- the transmitting the Position of the sun gear

## What Components Are Used?

|Component     |Description                   |
|---------------|----------------------|
|ESP32-MINI-1| Microcontroller          |
|DRV-8825      | Stepper Driver Board|
|AS5600		 | Magnetic Encoder     |

## ESP-32-MINI-1 Specifications
---
### Pin Descriptions 

#### Power supply pins are:

|Name | Pin Number | Description|
|------|-------------|-------------|
|GND  |1,2,27,38-55|Ground        |
|3V3| 3| 3.3V Power|

#### Logic pins used for operation:

|Name | Pin Number | Description|
|------|-------------|-------------|
|EN|8| Enable pin // _HIGH: Active Low: Deactivated_|

## DRV8825 Driver Specications
---
### Pin Descriptions

#### Power Pins:
|Name | Pin Number | Description|
|:------:|:------------:|:-------------:|

#### Logic Pins Handling the Control of the Motor:

|Name | Pin Number | Description|
|:------:|:------------:|:-------------:|
| **Controls For Micro-Stepping** |
|M0 | 2|
|M1 | 3|
|M2 | 4|
| **Controls For Movement**|
|STEP|7| Sends pulses for each step // _the faster the pulse the faster it goes_| 
|DIR|8| Controls the direction of moter // _High is Clockwise and Low is Counter-Clockwise_ |


