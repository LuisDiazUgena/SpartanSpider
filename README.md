# SpartanSpider
New library version for my [spider robot project](https://github.com/LuisDiazUgena/spider-robot-project)

Now working on the library. Maybe it doesn't work as expected.

## How to play with this.

Add the library to your Arduino sketchbook folder. Check out the example included in the library.

You need to create a new object:

    SpartanSpider your-spider-name = Spider(servo1pin,servo2pin,...,servo12pin);

Then, in setup launch:

    your-spider-name.initialize();

This will attach the servos and initialize Serial port at 19200 bauds.

Then call:
  
    your-spider-name.moveToInit();

This will put the servos in their initial position

You can use *manageIncomming* function to play with movements using the serial port. (Will update this soon). You can know what every command do under manageIncomming function in *SpartanSpider.cpp* file.

i.e: To move a servo send SServonum,position. To move servo 12 to position 80 you will need to send: S12,80.

## TODO

Calibrate: Add calibration Mode

Walk: Fordward, Backwards, Left, Right

Rotate: Clockwise, counterclockwise
