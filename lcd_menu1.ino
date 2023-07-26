#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C mylcd(32,16,2);
byte up=3;
byte down=2;
int menu=1;
byte Arrow[] = {
  B01000,
  B01100,
  B01110,
  B01111,
  B01110,
  B01100,
  B01000,
  B00000
};

void setup(){
  pinMode(up,INPUT_PULLUP);
  pinMode(down,INPUT_PULLUP);
  mylcd.init();
  mylcd.backlight();
  mylcd.createChar(0,Arrow);
  updateMenu();

}


void loop(){
  if(!digitalRead(down)){
  	menu++;
  	updateMenu();
  	delay(100);
    while(!digitalRead(down));
  }
   if(!digitalRead(up)){
  	menu--;
  	updateMenu();
  	delay(100);
    while(!digitalRead(up));
  }

}

void updateMenu(){
  switch(menu){
  case 0: 
    menu =1;
  case 1:
    mylcd.clear();
    mylcd.setCursor(0,0);
    mylcd.write(0);
    mylcd.setCursor(1,0);
    mylcd.print("Selcet Program");
    mylcd.setCursor(1,1);
    mylcd.print("Setting");
    break;
  case 2:
    mylcd.clear();
    mylcd.setCursor(0,0);
    mylcd.print(" Selcet Program");
    mylcd.setCursor(0,1);
    mylcd.write(0);
    mylcd.setCursor(1,1);
    mylcd.print(" Setting");
    break;
  case 3:
    mylcd.clear();
    mylcd.setCursor(0,0);
    mylcd.write(0);
    mylcd.setCursor(1,0);
    mylcd.print(" Powersaving");
    mylcd.setCursor(0,1);
    mylcd.print(" Shutdown");
    break;
  case 4:
    mylcd.clear();
    mylcd.print(" Powersaving");
    mylcd.setCursor(0,1);
    mylcd.write(0);
    mylcd.setCursor(1,1);
    mylcd.print(" Shutdown");
    break;
  
  }

}
