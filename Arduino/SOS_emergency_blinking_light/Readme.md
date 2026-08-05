**SOS Emergency Blinking Light**

**Description**

This project creates an SOS emergency signal using an Arduino and LED.

The LED blinks in the Morse code pattern for SOS:
- S = 3 short blinks
- O = 3 long blinks
- S = 3 short blinks

This project demonstrates controlling LED timing using delays.

**Components Used**

- Arduino Uno
- LED
- 220Ω/330Ω resistor
- Breadboard
- Jumper wires

**Working**

The Arduino sends HIGH and LOW signals to the LED pin.

Different delay timings create:
- Short blink → 100ms
- Long blink → 300ms

The sequence repeats continuously.

**Code**

`SOS_emergency_blinking_light.ino`

**Simulation**

Wokwi simulation screenshots are included in this folder.

**Future Improvements**

- Add a push button to activate SOS
- Add a buzzer for an audio SOS signal
- Use a battery-powered setup