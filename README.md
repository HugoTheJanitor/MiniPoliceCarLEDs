# MiniPoliceLEDs

This project is prepared in two versions:

- [MiniPoliceLEDs.ino](MiniPoliceLEDs.ino) — the real Arduino sketch for Arduino IDE and for uploading to the board.
- [MiniPoliceLEDsVSC](MiniPoliceLEDsVSC) — a version for Visual Studio Code, made for easier viewing and editing in the editor.

## How to use it
1. For Arduino IDE, open [MiniPoliceLEDs.ino](MiniPoliceLEDs.ino).
2. For VS Code, open [MiniPoliceLEDsVSC](MiniPoliceLEDsVSC).
3. Select the correct board and port in Arduino IDE (Tools → Board, Tools → Port) and click Upload.

## Photos
Below are the wiring photos and a simple LED polarity diagram included in the repository under the photos/ folder.

![LED anode/cathode diagram](photos/1.png)

![Breadboard + Arduino wiring](photos/2.png)

## Important note
If you need the actual working Arduino code, use [MiniPoliceLEDs.ino](MiniPoliceLEDs.ino).

```cpp
// If you compile with the Arduino IDE, you don't need to add #include <Arduino.h>.
// If you use another build system, add:
#include <Arduino.h>

// This code is intentionally simple for beginners — not optimized but easy to understand.
```
