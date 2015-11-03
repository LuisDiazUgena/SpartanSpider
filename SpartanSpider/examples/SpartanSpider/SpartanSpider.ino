
#include "SpartanSpider.h"
#include "Servo.h"

SpartanSpider spider(2,3,4,5,6,7,8,9,10,11,12,13);

void setup() {
  spider.initialize();
  spider.moveToInit();
}

void loop() {
  spider.manageIncomming();
}
