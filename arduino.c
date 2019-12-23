/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int LED1 = 10;
int LED2 = 9;
int LED3 = 8;
int LED4 = 7;
long randNum;


void setup() {
  Serial.begin(9600);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  randomSeed(analogRead(0));
  
  randNum =  random(16);
  
  Serial.println(randNum);
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  
  //lcd.print(randNum(0 , 16));
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.print(randNum);
  if (randNum == 0){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }
  
  else if (randNum == 1){
   digitalWrite(LED4, HIGH);
  }
  
  else if (randNum == 2){
   digitalWrite(LED3, HIGH);
  }
  
  else if (randNum == 3){
   digitalWrite(LED3, HIGH);
   digitalWrite(LED4, HIGH);
  }
  
  else if (randNum == 4){
   digitalWrite(LED2, HIGH);
  }
                 
  else if (randNum == 5){
   digitalWrite(LED2, HIGH);
   digitalWrite(LED4, HIGH);
  }
                 
  else if (randNum == 6){
   digitalWrite(LED2, HIGH);
   digitalWrite(LED3, HIGH); 
  }
                 
  else if (randNum == 7){
   digitalWrite(LED2, HIGH);
   digitalWrite(LED4, HIGH);
   digitalWrite(LED3, HIGH); 
  }
                 
  else if (randNum == 8){
   digitalWrite(LED1, HIGH);
  }   
                 
  else if (randNum == 9){
   digitalWrite(LED1, HIGH);
   digitalWrite(LED4, HIGH);
  }
  
  else if (randNum == 10){
   digitalWrite(LED1, HIGH);
   digitalWrite(LED3, HIGH);
  }
  
  else if (randNum == 11){
   digitalWrite(LED1, HIGH);
   digitalWrite(LED4, HIGH);
   digitalWrite(LED3, HIGH); 
  }
  
  else if (randNum == 12){
   digitalWrite(LED1, HIGH);
   digitalWrite(LED2, HIGH);
  }
  
  else if (randNum == 13){
   digitalWrite(LED1, HIGH);
   digitalWrite(LED4, HIGH);
   digitalWrite(LED2, HIGH); 
  }
  
  else if (randNum == 14){
   digitalWrite(LED1, HIGH);
   digitalWrite(LED2, HIGH);
   digitalWrite(LED3, HIGH); 
  }
    
  else if (randNum == 15){
   digitalWrite(LED1, HIGH);
   digitalWrite(LED2, HIGH);
   digitalWrite(LED3, HIGH); 
   digitalWrite(LED4, HIGH);
  }
delay(10000);
}

