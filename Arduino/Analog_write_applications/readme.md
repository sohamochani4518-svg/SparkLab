**Analog Write Applications** 🔆

**Description**

This project demonstrates the use of Arduino's analogWrite() function to control LED brightness.

Arduino uses PWM (Pulse Width Modulation) to simulate analog voltage output.

**Components Used**

- Arduino Uno
- LED
- 220Ω/330Ω resistor
- Breadboard
- Jumper wires

**Concepts Learned**

- PWM
- analogWrite()
- LED brightness control
- Variables

**Working**

The brightness value is controlled using:

analogWrite(pin, brightness);

The brightness value ranges from:

- 0 → LED OFF
- 255 → Maximum brightness

**Code**

`Analog_write_applications.ino`

**Future Improvements**

- Use a potentiometer to adjust brightness
- Create fading LED effects
- Control motor speed using PWM