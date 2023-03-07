// This program is wrote for Arduino nano
// must works: now points, need points, dishreshold, get point, 

//lcd
#include<LiquidCrystal>
#define P_RS 12
#define P_RW 11
#define P_E  10
#define P_D4 9
#define P_D5 8
#define P_D6 7
#define P_D7 6

void lcd_setup(){
  // lcd setup
  LiquidCrystal lcd(P_RS, P_RW, P_E, P_D4, P_D5, P_D6, P_D7);
  lcd.begin(16, 4); // rows, cols
  lcd.clear();
  lcd.noCursor();
  lcd.noAutoscroll();
  // disp home
  lcd.home();
  lcd.print("YAMAZAKI FESTOOL");
  lcd.setCursor(0,3);
  lcd.print("SELECT MENU PLS");
  lcd.setCursor(0,1);
}

void lcd_disp(String dstr, int dnum){ // dstr: string(max: 10chars) dnum: 3digits [upside2].[downside1] data
  // string
  lcd.setCursor(1,1);
  lcd.write(0x7f);
  lcd.setCursor(3,1);
  lcd.print(dstr);
  lcd.setCursor(14,1);
  lcd.write(0x7e);
  // num
  lcd.setCursor(0,2);
  lcd.print(dnum/10+"."+dnum%10);
  return;
}

void menu(){
  if(P_BTR){
    menuset(1);
  }else if(P_BTL){
    menuset(-1);
  }
  return;
}

void menuset(unsigned byte process){
  if(process>=1 && process<=){
    
  }else{
    
  }
}

void setup() {
  lcd_setup();
}

void loop() {
  menu();
}