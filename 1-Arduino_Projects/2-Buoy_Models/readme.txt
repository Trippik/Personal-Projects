All of the included scripts are ardunino compatible and can be flashed to any Arduino board using the Ardunio IDE freely available
online (https://www.arduino.cc/en/Main/Software) or through the microsoft app store.

Each of the scripts is a looping light seqeunce that will repeat as long as the microcontroller is powered on.
The pin out for all scripts is as follows:
PIN 13 = LED

Pin 13 is the inbuilt LED pin in modern arduino boards, meaning that a resistor does not have to be used in the LED circuit and that the in built LED can be used to check the lighting pattern
The lighting routine for each script is stored in the code comments and is taken from the RYA Buoys and Buoyage page
(https://www.rya.org.uk/knowledge-advice/cruising-tips/navigation/Pages/buoys-and-buoyage.aspx) 
If using Arduino Nano you may need to use the (old bootloader) chip/processor configuration when compiling and uploading from the IDE
