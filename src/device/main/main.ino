// This program is wrote for Arduino nano

//lcd
#include<LiquidCrystal>
#define P_RS 12
#define P_RW 11
#define P_E  10
#define P_D4 9
#define P_D5 8
#define P_D6 7
#define P_D7 6

void setup() {
  LiquidCrystal lcd(P_RS, P_RW, P_E, P_D4, P_D5, P_D6, P_D7);
  lcd.begin(16, 4); // rows, cols
}

void loop() {
  
}