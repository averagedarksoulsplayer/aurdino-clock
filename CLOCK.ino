 #include <virtuabotixRTC.h>     
 #include <GyverOLED.h>
 #include<DHT.h>
 // designed by tahmid ahmed on 20th april 2023 
// using adafruit sensor lib , dht lib, gyver oled lib, virtuabotix rtc lib
  GyverOLED<SSH1106_128x64> oled;
  

DHT dht(3,DHT11);
virtuabotixRTC myRTC(6, 7, 8);
void setup()
{

Serial.begin(9600);


  oled.init();
  oled.clear();
   dht.begin();
     
}

void loop()
{
  oled.update();
  oled.setScale(2);
  oled.home();
  myRTC.updateTime();                                                                                    //| 
  oled.print(myRTC.hours);                                                                             //| 
  oled.setCursorXY(25, 0 );                                                                                  //| 
  oled.print(myRTC.minutes);                                                                           //| 
  oled.setCursorXY(65, 0 );     
  oled.print(myRTC.seconds);
  
  oled.setCursorXY(65, 25 );
  oled.print(dht.readTemperature()); 
     oled.setCursorXY(0, 25 );
       oled.print("temp:"); 

      oled.setScale(1); 
  oled.setCursorXY(95, 45 );
  oled.print(dht.readHumidity()); 
  oled.setCursorXY(0, 45 );
  oled.setScale(1);
   oled.print("humidity:");     
  oled.setScale(1);
  oled.setCursorXY(95,0);
  oled.print("time");
 
  
  }
