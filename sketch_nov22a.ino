#include <SparkFunColorLCDShield.h>

// Color LCD Shield library


LCDShield lcd;  // Creates an LCDShield, named lcd

void setup()
{
  lcd.init(PHILIPS);  // Initializes lcd, using an PHILIPS driver
  lcd.contrast(-51);  // -51's usually a good contrast value
  lcd.clear(ORANGE);  // oooh, orange!
  lcd.setPixel(BLUE, 66, 66);  // set a pixel in the middle
}

void loop()
{
}

