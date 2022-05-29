# Modular Actuator PCB Design

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
|EN|8| Enable pin // _Active High_|

## DRV8825 Driver Specications
---
### Pin Descriptions

#### Power Pins:
|Name | Pin Number | Description|
|:------:|:------------:|:-------------:|
|VMOT IN|16| 12v Motor Voltage input|
|Motor Ground |15    
|Enable | 1| Activate Driver // _Actuve Low_|
|Reset | 5 | Reset mode // _Active Low_|
|Sleep | 6 | Sleep mode // _Active Low_|


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
|Logic Ground | 16| 
| **Output From Driver** |
|Fault| 10| Outputs High unless shutdown
|B2|14|
|B1|13|
|A1|12|
|A2|11|

