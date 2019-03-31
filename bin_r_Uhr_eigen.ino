#include <Wire.h>
#include "RTClib.h" 

RTC_DS1307 RTC;

int munit, hunit;

void setup() {

  Wire.begin();
  RTC.begin();
  
  
  
  for (int k = 1; k <= 13; k++)
    pinMode(k, OUTPUT);
  }

void loop()
{
  DateTime now = RTC.now();
  int munit = now.minute();
  int hunit = now.hour();
  // convert to 12 hour time
  if (hunit > 12)
  {
    hunit = hunit - 12;
  }

//minutes units
    if (munit == 1 || munit == 3 || munit == 5 || munit == 7 || munit == 9 || munit == 11 || munit == 13 || munit == 15 || munit == 17 || munit == 19
    || munit == 21 || munit == 23 || munit == 25 || munit == 27 || munit == 31 || munit == 33 || munit == 35 || munit == 37 || munit == 39 || munit == 41
    || munit == 43 || munit == 45 || munit == 47 || munit == 49 || munit == 51 || munit == 53 || munit == 55 || munit == 57 || munit == 59)
    {
      digitalWrite(2, HIGH);
    } else {
      digitalWrite(2, LOW);
    }
    if (munit == 2 || munit == 3 || munit == 6 || munit == 7 || munit == 10 || munit == 11 || munit == 14 || munit == 15 || munit == 18 || munit == 19 || munit == 22
    || munit == 23 || munit == 26 || munit == 27 || munit == 30 || munit == 31 || munit == 34 || munit == 35 || munit == 38 || munit == 39 || munit == 42
    || munit == 43 || munit == 46 || munit == 47 || munit == 50 || munit == 51 || munit == 54 || munit == 55 || munit == 58 || munit == 59)
    {
      digitalWrite(3, HIGH);
    } else {
      digitalWrite(3, LOW);
    }
    
    if (munit == 4 || munit == 5 || munit == 6 || munit == 7 || munit == 12 || munit == 13 || munit == 14 || munit == 15 || munit == 20 || munit == 21
    || munit == 22 || munit == 23 || munit == 28 || munit == 29 || munit == 30 || munit == 31 || munit == 36 || munit == 37 || munit == 38 || munit == 39
    || munit == 44 || munit == 45 || munit == 46 || munit == 47 || munit == 52 || munit == 53 || munit == 54 || munit == 55 || munit == 60)
    {
      digitalWrite(4, HIGH);
    } else {
      digitalWrite(4, LOW);
    }
    
    if (munit == 8 || munit == 9 || munit == 10 || munit == 11 || munit == 12 || munit == 13 || munit == 14 || munit == 15 || munit == 24 || munit == 25 || munit == 26
    || munit == 27 || munit == 28 || munit == 29 || munit == 30 || munit == 31 || munit == 40 || munit == 41 || munit == 42 || munit == 43 || munit == 44 || munit == 45
    || munit == 46 || munit == 47 || munit == 56 || munit == 57 || munit == 58 || munit == 59 || munit == 60)
    {
      digitalWrite(5, HIGH);
    } else {
      digitalWrite(5, LOW);
    }

    if (munit == 16 || munit == 17 || munit == 18 || munit == 19 || munit == 20 || munit == 21 || munit == 22 || munit == 23 || munit == 24 || munit == 25 || munit == 26
    || munit == 27 || munit == 28 || munit == 29 || munit == 30 || munit == 31 || munit == 48 || munit == 49 || munit == 50 || munit == 51 || munit == 52
    || munit == 53 || munit == 54 || munit == 55 || munit == 56 || munit == 57 || munit == 58 || munit == 59 || munit == 60)
    {
      digitalWrite(6, HIGH);
    } else {
      digitalWrite(6, LOW);
    }

    if (munit == 32 || munit == 33 || munit == 34 || munit == 35 || munit == 36 || munit == 37 || munit == 38 || munit == 39 || munit == 40 || munit == 41 || munit == 42
    || munit == 43 || munit == 44 || munit == 45 || munit == 46 || munit == 47 || munit == 48 || munit == 49 || munit == 50 || munit == 51 || munit == 52 || munit == 53
    || munit == 54 || munit == 55 || munit == 56 || munit == 57 || munit == 58 || munit == 59 || munit == 60)
    {
      digitalWrite(7, HIGH);
    } else {
      digitalWrite(7, LOW);
    }

    //hour units
    if (hunit == 1 || hunit == 3 || hunit == 5 || hunit == 7 || hunit == 9 || hunit == 11) {
      digitalWrite(8, HIGH);
    } else {
      digitalWrite(8, LOW);
    }
    if (hunit == 2 || hunit == 3 || hunit == 6 || hunit == 7 || hunit == 10 || hunit == 11) {
      digitalWrite(9, HIGH);
    } else {
      digitalWrite(9, LOW);
    }
    if (hunit == 4 || hunit == 5 || hunit == 6 || hunit == 7 || hunit == 12) {
      digitalWrite(10, HIGH);
    } else {
      digitalWrite(10, LOW);
    }
    if (hunit == 8 || hunit == 9 || hunit == 10 || hunit == 11 || hunit == 12) {
      digitalWrite(11, HIGH);
    } else {
      digitalWrite(11, LOW);
    }
    

    
}
