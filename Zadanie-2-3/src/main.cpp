#include <Arduino.h>
uint8_t ledPin[]={4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
uint8_t ledDelay = 65;
uint8_t direction=1;
uint8_t currentLED=0;

void changeLED();

void setup() {
  // put your setup code here, to run once:
for (int i=0; i<10; i++ )
  {
  pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
    // put your main code here, to run repeatedly:
  for (int x=0;x<10;x++)
  {
    digitalWrite(ledPin[x], LOW);
  }
  digitalWrite(ledPin[currentLED], HIGH);
  currentLED += direction;
  if (currentLED==9)
  {
    direction=-1;
  }
  if (currentLED==0)
  {
    direction=1;
  }
 }