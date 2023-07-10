/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/Desktop/Remys_Labs/Lab9/src/Lab9.ino"
#include <oled-wing-adafruit.h>
#include <blynk.h>
#include "env.h"

void setup();
void loop();
void potentRead();
void buttonRead();
void tempRead();
void lightRead();
#line 5 "/Users/admin/Desktop/Remys_Labs/Lab9/src/Lab9.ino"
#define LIGHTPIN D0 //Light level from VCNL 4040
#define BUTTONPIN D2 //State of the button
#define TEMPPIN D3 //Temperature from TMP36
#define GREEN D5 //Green LED
#define YELLOW D6 //Yellow LED
#define BLUE D7 //Blue LED
#define POTENTPIN A4 //State of the Potentiometer

OledWingAdafruit display;
uint16_t value;

SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);



void setup()
{
    Serial.begin(9600);
    pinMode(LIGHTPIN, INPUT);
    pinMode(BUTTONPIN, INPUT);
    pinMode(POTENTPIN, INPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(YELLOW, OUTPUT);
    pinMode(BLUE, OUTPUT);
}

void loop()
{

    
}
void potentRead()
{
    uint16_t potentValue = analogRead(potentValue);
    potentValue = analogRead(POTENTPIN);
    digitalWrite(BUTTONPIN, potentValue);
}

void buttonRead()
{

}

void tempRead()
{

}

void lightRead()
{

}

