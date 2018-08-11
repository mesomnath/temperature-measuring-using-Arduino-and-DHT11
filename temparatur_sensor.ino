#include <dht11.h>
#include <LiquidCrystal.h>


#define sensor 8 // Analog Pin sensor is connected to
 
dht11 DHT;
LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // initialize the library with the numbers of the interface pi
 
void setup(){
  
  pinMode (sensor, INPUT);
  lcd.begin(16, 2);       // set up the LCD's number of columns and rows:
  lcd.setCursor(1, 0);    
  lcd.print("well come ");// Print a message to the LCD.
  lcd.setCursor(4, 1);
  lcd.print("studentsroom");// Print anather message to the LCD.
  delay (1000);
  lcd.clear();
  lcd.print("wait");
  delay (1000);
  Serial.begin(9600);
 
}//end "setup()"
 
void loop(){
  //Start of Program 
 
      DHT.read(sensor);
      lcd.clear();
      lcd.print("humidity= ");
      lcd.print(DHT.humidity);
      lcd.print("% ");
      lcd.setCursor(0, 1);
      lcd.print("temperature= ");
      lcd.print(DHT.temperature); 
      lcd.print("C  ");
    
      delay(1000);//Wait 5 seconds before accessing sensor again.
 
}// end loop(
