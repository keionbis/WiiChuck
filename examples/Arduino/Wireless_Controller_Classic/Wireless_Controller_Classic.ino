#include <WiiChuck.h>
#include <esp_now.h>
#include <WiFi.h>

Classic classic;
int transmission_Array[18] = {0};
void setup() {
  Serial.begin(115200);
  classic.begin();
}

void loop() {
   transmission_Array = {classic.getJoyYLeft(),classic.getJoyXLeft(),classic.getJoyYRight(),classic.getJoyXRight(), 
                         classic.getTriggerLeft, classic.getTriggerRight, classic.getPadRight, classic.getPadDown,
                         classic.getPadUp, classic.getPadLeft, classic.getButtonX, classic.getButtonY, classic.getButtonA,
                         classic.getButtonB, classic.getButtonMinus, classic.getButtonPlus, classic.getButtonZLeft,
                         classic.getButtonZRight};
}
