# LCD Custom Characters

Simple custom characters designed for 16x2 LCD with a 5x8 matrix display.

## Schematic

![Schematic](https://github.com/METACRYPT12/esp_custom_char/blob/master/res/Schematic.png)

## WorkAround for 3v3 Microcontroller

The HD47780 controller has a working voltage range of 4.7V to 5.3V which is more than the controller output so an external voltage source is connected to VCC and the same is hooked to the potentiometer on V0 (Contrast is controlled by the op-amp which uses VCC as reference) to reach maximum contrast.  
3V3 is just enough to send data over the data lines and since R/W is set to GND (write mode), we do not have to worry about any logic level shifting for the data bus.

## Custom Characters

The characters are represented by a byte array of 8 elements with each byte's 5 LSBs representing the color/polarity of the pixel on the 5x8 matrix display.  
The HD47780 provides the option of creating and storing upto 8 custom characters which can be displayed by calling the designated numbers assigned to them.

## Video Demonstration

![Video Demonstration](https://github.com/METACRYPT12/esp_custom_char/blob/master/res/vid_demo.mp4)
