#include <oled-wing-adafruit.h>
#include <blynk.h>
#include "env.h"

#define LIGHTPIN D0  // Light level from VCNL 4040
#define BUTTONPIN D2 // State of the button
#define GREEN D5     // Green LED
#define YELLOW D6    // Yellow LED
#define BLUE D7      // Blue LED
#define POTENTPIN A4 // State of the Potentiometer
#define TEMPPIN A3   // Temperature from TMP36

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
    uint64_t reading = analogRead(TEMPPIN);
    double voltage = (reading * 3.3) / 4095.0;
    double temperature = (voltage - 0.5) * 100;
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(0, 0);
    display.println(temperature);
    display.display();
}

void lightRead()
{
}
