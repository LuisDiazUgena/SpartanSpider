#ifndef SpartanSpider_h
#define SpartanSpider_h

#include "Arduino.h"
#include <Servo.h>

class SpartanSpider{
public:
    SpartanSpider(int pinServo1,int pinServo2,int pinServo3,int pinServo4,int pinServo5,int pinServo6,int pinServo7, int pinServo8, int pinServo9, int pinServo10, int pinServo11, int pinServo12);
    void initialize();
    void manageIncomming();
    void moveToInit();
    void manageServos();
    void moveServo(int _servo, int _pos);
    void makeX();
    void centerServosStable();
    void standUp();
    void standDown();
    void lift();
    void moveFordwardL1();
    void moveFordwardL2();
    void moveFordwardL3();
    void moveFordwardL4();
    void moveCenterL1();
    void moveCenterL2();
    void moveCenterL3();
    void moveCenterL4();
    void moveBackwardsL1();
    void moveBackwardsL2();
    void moveBackwardsL3();
    void moveBackwardsL4();
    void cross();
    
private:
    Servo _servo1;
    Servo _servo2;
    Servo _servo3;
    Servo _servo4;
    Servo _servo5;
    Servo _servo6;
    Servo _servo7;
    Servo _servo8;
    Servo _servo9;
    Servo _servo10;
    Servo _servo11;
    Servo _servo12;

    int _pinServo1;
    int _pinServo2;
    int _pinServo3;
    int _pinServo4;
    int _pinServo5;
    int _pinServo6;
    int _pinServo7;
    int _pinServo8;
    int _pinServo9;
    int _pinServo10;
    int _pinServo11;
    int _pinServo12;

};

#endif
