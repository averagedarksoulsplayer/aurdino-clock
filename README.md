# aurdino-clock with temperature and humidity sensor . WORK IN PROGRESS 
#using adafruit sensor lib , dht lib, gyver oled lib, virtuabotix rtc lib
supports only SSH1106 oled 128*64 display .i2c only
# dht11 temperature and humidity sensor
# DS1302T real time clock 
# there is a time error when time is less than 10S . 
# ------------- CONNECTIONS --------------
#  SCL AND SDA OF OLED ----> SCL AND SDA OF AURDINO 
#  RTC RESET PIN , DATA PIN , CLK PIN ----- > 8 , 7 , 6 OF AURDINO
# DHT 11 SIGNAL TO PIN 3 OF AURDINO 
# <3 Aurp64Labs (itteration - 1)   20/4/2023 

# ---- tahmid ahmed 
