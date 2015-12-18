#include <SoftwareSerial.h>

/*
  Declaration of RX and TX pins for communication with CC3D.
*/
SoftwareSerial CC3Dcomm(10, 11);

void setup() {
  /* Setup of USB connection for debugging purposes.*/
  Serial.begin(115200);
  while(!Serial) {
  }
  
  CC3Dcomm.begin(57600);
}

void loop() {
 
}
