#include "Arduino.h"
#include <Servo.h>
#include "SpartanSpider.h"

SpartanSpider::SpartanSpider(int pinServo1, int pinServo2, int pinServo3, int pinServo4, int pinServo5, int pinServo6, int pinServo7, int pinServo8,int pinServo9, int pinServo10, int pinServo11, int pinServo12){
    _pinServo1 = pinServo1;
    _pinServo2 = pinServo2;
    _pinServo3 = pinServo3;
    _pinServo4 = pinServo4;
    _pinServo5 = pinServo5;
    _pinServo6 = pinServo6;
    _pinServo7 = pinServo7;
    _pinServo8 = pinServo8;
    _pinServo9 = pinServo9;
    _pinServo10 = pinServo10;
    _pinServo11 = pinServo11;
    _pinServo12 = pinServo12;

}

void SpartanSpider::initialize(){
    Serial.begin(19600);
    Serial.println("Initilize");
    _servo1.attach(_pinServo1);
    delay(100);
    _servo2.attach(_pinServo2);
    delay(100);
    _servo3.attach(_pinServo3);
    delay(100);
    _servo4.attach(_pinServo4);
    delay(100);
    _servo5.attach(_pinServo5);
    delay(100);
    _servo6.attach(_pinServo6);
    delay(100);
    _servo7.attach(_pinServo7);
    delay(100);
    _servo8.attach(_pinServo8);
    delay(100);
    _servo9.attach(_pinServo9);
    delay(100);
    _servo10.attach(_pinServo10);
    delay(100);
    _servo11.attach(_pinServo11);
    delay(100);
    _servo12.attach(_pinServo12);
    delay(100);
    Serial.println("Finish init");
}
void SpartanSpider::moveToInit(){
    _servo1.write(50);
    delay(100);
    _servo2.write(90);
    delay(100);
    _servo3.write(90);
    delay(100);
    _servo4.write(90);
    delay(100);
    _servo5.write(75);
    delay(100);
    _servo6.write(90);
    delay(100);
    _servo7.write(90);
    delay(100);
    _servo8.write(80);
    delay(100);
    _servo9.write(55);
    delay(100);
    _servo10.write(90);
    delay(100);
    _servo11.write(115);
    delay(100);
    _servo12.write(90);
    delay(100);
}
void SpartanSpider::manageIncomming(){
    if(Serial.available() > 0){
        char _incomming = Serial.read();


            if(_incomming == 'A'){
                Serial.println("Stand Down");
                centerServosStable();
                standDown();
            }
            if(_incomming == 'B'){
                Serial.println("Stand Up");
                centerServosStable();
                standUp();
            }
            if(_incomming == 'C'){
                Serial.println("Make X");
                centerServosStable();
                makeX();
            }
            if(_incomming == 'D'){
                Serial.println("mid Servos Stable");
                centerServosStable();
            }
            if(_incomming == 'E'){
                Serial.println("Cross");
                centerServosStable();
                cross();
            }
            if(_incomming == 'F'){
                Serial.println("Lift");
                centerServosStable();
                lift();
            }
            if(_incomming == 'G'){
                Serial.println("G");
                centerServosStable();

            }
            if(_incomming == 'H'){
                Serial.println("H");

            }
            if(_incomming == 'I'){
                Serial.println("I");

            }
            if(_incomming == 'J'){
                Serial.println("J");

            }
            if(_incomming == 'S'){
                Serial.print("Moving Servo ");
                manageServos();
            }
            if(_incomming == 'a'){
                Serial.println("Move Fordward L1");
                moveFordwardL1();
            }
            if(_incomming == 'b'){
                Serial.println("Move Fordward L2");
                moveFordwardL2();
            }
            if(_incomming == 'c'){
                Serial.println("Move Fordward L3");
                moveFordwardL3();
            }
            if(_incomming == 'd'){
                Serial.println("Move Fordward L4");
                moveFordwardL4();
            }
            if(_incomming == 'e'){
                Serial.println("Move Backwards L1");
                moveBackwardsL1();
            }
            if(_incomming == 'f'){
                Serial.println("Move Backwards L2");
                moveBackwardsL2();
            }
            if(_incomming == 'g'){
                Serial.println("Move Backwards L3");
                moveBackwardsL3();
            }
            if(_incomming == 'h'){
                Serial.println("Move Backwards L4");
                moveBackwardsL4();
            }
            if(_incomming == 'i'){
                Serial.println("Move Center L1");
                moveCenterL1();
            }
            if(_incomming == 'j'){
                Serial.println("Move Center L2");
                moveCenterL2();
            }
            if(_incomming == 'k'){
                Serial.println("Move Center L3");
                moveCenterL3();
            }
            if(_incomming == 'l'){
                Serial.println("Move Center L4");
                moveCenterL4();
            }
    }
}
void SpartanSpider::cross(){
    _servo3.write(125);
    _servo4.write(55);
    _servo7.write(120);
    _servo10.write(55);
}
void SpartanSpider::manageServos(){
    int _servo,_pos;
    //if (Serial.available()>0){
        _servo = Serial.parseInt();
        _pos = Serial.parseInt();
        if (_servo !=0 && _servo <=12 ){
            Serial.print("Recieved: Servo ");
            Serial.print(_servo);
            Serial.print(" to pos ");
            Serial.println(_pos);

            moveServo(_servo,_pos);
        }
    //}
}
void SpartanSpider::moveServo(int _servo, int _pos) {
    Serial.print("Moving servo");
    Serial.println(_servo);

    switch (_servo){
        case 1:
        _servo1.write(_pos);
        break;
        case 2:
        _servo2.write(_pos);
        break;
        case 3:
        _servo3.write(_pos);
        break;
        case 4:
        _servo4.write(_pos);
        break;
        case 5:
        _servo5.write(_pos);
        break;
        case 6:
        _servo6.write(_pos);
        break;
        case 7:
        _servo7.write(_pos);
        break;
        case 8:
        _servo8.write(_pos);
        break;
        case 9:
        _servo9.write(_pos);
        break;
        case 10:
        _servo10.write(_pos);
        break;
        case 11:
        _servo11.write(_pos);
        break;
        case 12:
        _servo12.write(_pos);
        break;
    }
    delay(100);
    Serial.print("Done with servo");
    Serial.print(_servo);
    Serial.println("\n---------");
}
void SpartanSpider::makeX(){
    _servo3.write(90);
    _servo4.write(90);
    _servo7.write(90);
    _servo10.write(90);
}
void SpartanSpider::centerServosStable(){
    _servo1.write(50);
    _servo5.write(75);
    _servo8.write(80);
    _servo11.write(115);
}
void SpartanSpider::standUp(){
    //move inner servos
    makeX();
    delay(50);
    //move central servos
    centerServosStable();
    delay(50);
    //lift
    lift();
    delay(10);
}
void SpartanSpider::standDown(){

    _servo5.write(85);
    _servo4.write(90);
    _servo2.write(170);
    _servo6.write(30);
    _servo9.write(135);
    _servo12.write(15);
}
void SpartanSpider::lift(){
    _servo2.write(90);
    _servo6.write(90);
    _servo9.write(55);
    _servo12.write(90);
}
void SpartanSpider::moveFordwardL1(){
  _servo11.write(90);
  delay(50);
  _servo10.write(90);
  delay(10);
  _servo11.write(115);
}
void SpartanSpider::moveFordwardL2(){
  _servo1.write(90);
  delay(50);
  _servo3.write(90);
  delay(10);
  _servo1.write(50);
}
void SpartanSpider::moveFordwardL3(){
  _servo8.write(130);
  delay(50);
  _servo7.write(160);
  delay(10);
  _servo8.write(90);
}
void SpartanSpider::moveFordwardL4(){
  _servo5.write(55);
  delay(50);
  _servo4.write(30);
  delay(10);
  _servo5.write(80);
}
void SpartanSpider::moveCenterL1(){
  _servo11.write(90);
  delay(50);
  _servo10.write(45);
  delay(10);
  _servo11.write(115);
}
void SpartanSpider::moveCenterL2(){
  _servo1.write(90);
  delay(50);
  _servo3.write(130);
  delay(10);
  _servo1.write(50);
}
void SpartanSpider::moveCenterL3(){
  _servo8.write(130);
  delay(50);
  _servo7.write(130);
  delay(10);
  _servo8.write(90);
}
void SpartanSpider::moveCenterL4(){
  _servo5.write(55);
  delay(50);
  _servo4.write(30);
  delay(10);
  _servo5.write(80);
}
void SpartanSpider::moveBackwardsL1(){
  _servo10.write(20);
  delay(100);
}
void SpartanSpider::moveBackwardsL2(){
  _servo3.write(150);
  delay(100);
}
void SpartanSpider::moveBackwardsL3(){
  _servo7.write(90);
  delay(100);
}
void SpartanSpider::moveBackwardsL4(){
  _servo4.write(90);
  delay(100);
}
