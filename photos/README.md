# Photos - Project Notes

This folder contains photos and wiring notes for the MiniPoliceLEDs project.

Images

- photos/3.png  (LED anode/cathode diagram)
- photos/4.png  (breadboard + Arduino wiring photo)

Below are the images embedded for easier viewing (if the image files are present in the repository):

![Breadboard + Arduino wiring](photos/4.png)

![LED anode/cathode diagram](photos/3.png)

---

## Components
- Arduino Mega 2560
- Breadboard
- 2 × LEDs (red + blue)
- 2 × 220 Ω resistors
- 3 × male-to-male jumper wires

## How it works
The program simulates a mini police flashing light. Both LEDs repeatedly turn ON and OFF with a short delay. You can change the flashing speed by modifying the delay() value in the code.

## Wiring (clear step-by-step)
1. Connect Arduino GND to the breadboard power rail (-) using a blue jumper wire.
2. Place each LED on the breadboard so the anode (longer leg, +) is in a different row than the cathode (shorter leg, -).
3. Add a 220 Ω resistor in series with each LED anode (from the LED anode row to the row that will be connected to the Arduino pin).
4. Connect Arduino pin D8 to the red LED anode row (through its resistor) using a red jumper wire.
5. Connect Arduino pin D9 to the blue LED anode row (through its resistor) using a red jumper wire.
6. Connect both LED cathodes to the breadboard ground rail (-).

Notes:
- LED polarity: the longer leg is the anode (+), the shorter leg is the cathode (-).
- Always use current-limiting resistors (220 Ω recommended) to protect the LEDs.

### Your wiring text (verbatim)

GND Blue Jumper wire(Male to Male) connected to: – on the PowerRails of BreadBoard (PowerRails: 2 parts –and+)
- GND → BreadBoard Power Rail (-)
D9, D8, Red Jumper Wires(Male to Male) connected to:+ on the middle part of the BreadBoard Terminal Strips (Terminal Strips: 2 middle parts of BreadBoard)
- D8 → Red LED (through 220Ω resistor)
- D9 → Blue LED (through 220Ω resistor)
(LEDs, Having 2 legs, 1 is bigger is + (5V, HIGH) and –  (0V, LOW)


## Code note
If you don't use the Arduino IDE, delete the first line of the example sketch that includes the Arduino core header and keep only:

#include <Arduino.h>

(Place your sketch file in the repository root or in a sketches/ folder as you prefer.)

## What I learned
- Using digital output pins.
- Controlling LEDs with digitalWrite().
- Why current-limiting resistors are required.
- Organizing wiring on a breadboard.

## Possible improvements
- Add a buzzer.
- Control flashing speed with a potentiometer.
- Use PWM for smooth fade effects.

---

Русский (кратко)

Компоненты
- Arduino Mega 2560
- Макетная плата
- 2 светодиода
- 2 резистора 220 Ω
- 3 соединительных провода

Сборка и подключение
- GND Arduino → минусовая шина (-) на макетной плате (синий провод)
- D8 → резистор → анод (длинная нога) красного светодиода
- D9 → резистор → анод синего светодиода
- Катоды светодиодов → минусовая шина (-)

Примечание: если нужно, могу переформулировать текст или сразу загрузить изображения в папку photos/ (файлы photos/1.png и photos/2.png).
