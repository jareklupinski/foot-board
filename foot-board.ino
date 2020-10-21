#include "Keyboard.h"

void setup() {
  pinMode(PB0, INPUT_PULLUP);
  pinMode(PB1, INPUT_PULLUP);
  pinMode(PB3, INPUT_PULLUP);
  pinMode(PB4, INPUT_PULLUP);
  pinMode(PB5, INPUT_PULLUP);
  pinMode(PB6, INPUT_PULLUP);
  pinMode(PB7, INPUT_PULLUP);
  pinMode(PB8, INPUT_PULLUP);
  pinMode(PB9, INPUT_PULLUP);
  pinMode(PB10, INPUT_PULLUP);
  pinMode(PB11, INPUT_PULLUP);
  pinMode(PB12, INPUT_PULLUP);
  pinMode(PB13, INPUT_PULLUP);
  pinMode(PC13, OUTPUT);
  Keyboard.begin();
  digitalWrite(PC13, LOW);
}

byte button1Pressed = 0;
byte button2Pressed = 0;
byte button3Pressed = 0;
byte button4Pressed = 0;
byte button5Pressed = 0;
byte button6Pressed = 0;
byte button7Pressed = 0;
byte button8Pressed = 0;
byte button9Pressed = 0;
byte button10Pressed = 0;
byte button11Pressed = 0;
byte button12Pressed = 0;
byte button13Pressed = 0;

void loop() {
  byte newButton1Pressed = 0;
  if ( digitalReadFast(PB_0) ) newButton1Pressed = 1;
  if ( newButton1Pressed != button1Pressed ) {
    newButton1Pressed ? Keyboard.release('1') : Keyboard.press('1');
    button1Pressed = newButton1Pressed;
  }
  byte newButton2Pressed = 0;
  if ( digitalReadFast(PB_1) ) newButton2Pressed = 1;
  if ( newButton2Pressed != button2Pressed ) {
    newButton2Pressed ? Keyboard.release('2') : Keyboard.press('2');
    button2Pressed = newButton2Pressed;
  }
  byte newButton3Pressed = 0;
  if ( digitalReadFast(PB_3) ) newButton3Pressed = 1;
  if ( newButton3Pressed != button3Pressed ) {
    newButton3Pressed ? Keyboard.release('3') : Keyboard.press('3');
    button3Pressed = newButton3Pressed;
  }
  byte newButton4Pressed = 0;
  if ( digitalReadFast(PB_4) ) newButton4Pressed = 1;
  if ( newButton4Pressed != button4Pressed ) {
    newButton4Pressed ? Keyboard.release('4') : Keyboard.press('4');
    button4Pressed = newButton4Pressed;
  }
  byte newButton5Pressed = 0;
  if ( digitalReadFast(PB_5) ) newButton5Pressed = 1;
  if ( newButton5Pressed != button5Pressed ) {
    newButton5Pressed ? Keyboard.release('5') : Keyboard.press('5');
    button5Pressed = newButton5Pressed;
  }
  byte newButton6Pressed = 0;
  if ( digitalReadFast(PB_6) ) newButton6Pressed = 1;
  if ( newButton6Pressed != button6Pressed ) {
    newButton6Pressed ? Keyboard.release('z') : Keyboard.press('z');
    button6Pressed = newButton6Pressed;
  }
  byte newButton7Pressed = 0;
  if ( digitalReadFast(PB_7) ) newButton7Pressed = 1;
  if ( newButton7Pressed != button7Pressed ) {
    newButton7Pressed ? Keyboard.release('x') : Keyboard.press('x');
    button7Pressed = newButton7Pressed;
  }
  byte newButton8Pressed = 0;
  if ( digitalReadFast(PB_8) ) newButton8Pressed = 1;
  if ( newButton8Pressed != button8Pressed ) {
    newButton8Pressed ? Keyboard.release(KEY_LEFT_ARROW) : Keyboard.press(KEY_LEFT_ARROW);
    button8Pressed = newButton8Pressed;
  }
  byte newButton9Pressed = 0;
  if ( digitalReadFast(PB_9) ) newButton9Pressed = 1;
  if ( newButton9Pressed != button9Pressed ) {
    newButton9Pressed ? Keyboard.release(KEY_UP_ARROW) : Keyboard.press(KEY_UP_ARROW);
    button9Pressed = newButton9Pressed;
  }
  byte newButton10Pressed = 0;
  if ( digitalReadFast(PB_10) ) newButton10Pressed = 1;
  if ( newButton10Pressed != button10Pressed ) {
    newButton10Pressed ? Keyboard.release(KEY_DOWN_ARROW) : Keyboard.press(KEY_DOWN_ARROW);
    button10Pressed = newButton10Pressed;
  }
  byte newButton11Pressed = 0;
  if ( digitalReadFast(PB_11) ) newButton11Pressed = 1;
  if ( newButton11Pressed != button11Pressed ) {
    newButton11Pressed ? Keyboard.release('m') : Keyboard.press('m');
    button11Pressed = newButton11Pressed;
  }
  byte newButton12Pressed = 0;
  if ( digitalReadFast(PB_12) ) newButton12Pressed = 1;
  if ( newButton12Pressed != button12Pressed ) {
    newButton12Pressed ? Keyboard.release('n') : Keyboard.press('n');
    button12Pressed = newButton12Pressed;
  }
  byte newButton13Pressed = 0;
  if ( digitalReadFast(PB_13) ) newButton13Pressed = 1;
  if ( newButton13Pressed != button13Pressed ) {
    newButton13Pressed ? Keyboard.release(KEY_RIGHT_ARROW) : Keyboard.press(KEY_RIGHT_ARROW);
    button13Pressed = newButton13Pressed;
  }
}