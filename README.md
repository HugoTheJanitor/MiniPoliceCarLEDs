# MiniPoliceLEDs

This project is prepared in two versions:

- [ArduinoIDE sketch](ArduinoIDE/MiniPoliceLEDs.ino) — the real Arduino sketch for Arduino IDE and for uploading to the board.
- [VS Code view](VisualStudioCode/MiniPoliceLEDsVSC) — a version for Visual Studio Code, made for easier viewing and editing in the editor.

## Wiring guide and photos
See the full wiring guide and photos: [Guide.md](photos/Guide.md)
Photos are stored in the `photos/` folder (for example `photos/Cathode.png`, `photos/BreadArduino.png`).

## How to use it
1. For Arduino IDE, open `ArduinoIDE/MiniPoliceLEDs.ino`.
2. For VS Code, open `VisualStudioCode/MiniPoliceLEDsVSC`.
3. Select the correct board and port in Arduino IDE (Tools → Board, Tools → Port) and click Upload.

## Important note
If you need the actual working Arduino code, use `ArduinoIDE/MiniPoliceLEDs.ino`.

```cpp
// If you compile with the Arduino IDE, you don't need to add #include <Arduino.h>.
// If you use another build system, add:
#include <Arduino.h>

// This code is intentionally simple for beginners — not optimized but easy to understand.
```
