# CD74HC4067
Arduino library for the CD74HC4067 mux


Connect the four control pins to any unused digital or analog pins.
 
Connect the common pin to any other available pin. This is the pin that will be 
shared between the 16 channels of the CD74HC4067. The 16 channels will inherit the
capabilties of the common pin. For example, if it's connected to an anolog pin,
you will be able to use analogRead on each of the 16 channels. 

use the library by adding 

`#include <CD74HC4067.h>`

to the top of your program.

Create a new CD74HC4067 object, specifying the control pins, s0 s1, s2, s3.

`CD74HC4067 my_mux(4, 5, 6, 7);`

Use -1 for the control pins you want to leave out, eg. 4 channels: S0 on PIN 4 and S1 on PIN 5:
Remember to connect theese left out control pins on the CD74HC4067 to ground.

`CD74HC4067 my_mux(4, 5, -1, -1);`

Set the channel using the .channel() function

`my_mux.channel(8);`
