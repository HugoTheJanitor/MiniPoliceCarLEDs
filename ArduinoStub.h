#ifndef ARDUINO_STUB_H
#define ARDUINO_STUB_H

#define HIGH 1
#define LOW 0
#define OUTPUT 1
#define INPUT 0

typedef unsigned char byte;

inline void pinMode(int, int) {}
inline void digitalWrite(int, int) {}
inline void delay(unsigned long) {}

#endif
