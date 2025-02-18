#include <WiFi.h>
#include <dummy.h>

//~~~~~~~~~~~~~~~~~~~~~~Connect to WiFi~~~~~~~~~~~~~~~~~~~~~~~~//
const char* ssid = "***********";     //Masukkan ID Wifi
const char* password = "**********";   //MAsukkan Password Wifi
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

//~~~~~~~~~~~~~~Configurasi Multiplex Analog~~~~~~~~~~~~~~~~~~~//
#define SA0 1 //Pin Trigger Signal Multiplexer Analog S0
#define SA1 2 //Pin Trigger Signal Multiplexer Analog S1
#define SA2 3 //Pin Trigger Signal Multiplexer Analog S2
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

//~~~~~~~~~~~~~~Configurasi Multiplex Digital~~~~~~~~~~~~~~~~~~//
#define SD0 4 //Pin Trigger Signal Multiplexer Digital S0
#define SD1 5 //Pin Trigger Signal Multiplexer Digital S1
#define SD2 6 //Pin Trigger Signal Multiplexer Digital S2
#define SD3 7 //Pin Trigger Signal Multiplexer Digital S3
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

//~~~~~~~~~~~Configurasi Signal Multiplex Analog~~~~~~~~~~~~~~~//
#define SIGA 8 //Pin Input Signal Multiplexer Analog
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

//~~~~~~~~~~~Configurasi Signal Multiplex Analog~~~~~~~~~~~~~~~//
#define SIGD 9 //Pin Input Signal Multiplexer Analog
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

String Space = ";";

void setup() {
  //Setting Pin Multiplexer Analog dan Digital
  pinMode(SIGA, INPUT);
  pinMode(SIGD, INPUT);
  pinMode(SA0, OUTPUT);
  pinMode(SA1, OUTPUT);
  pinMode(SA2, OUTPUT);
  pinMode(SD0, OUTPUT);
  pinMode(SD1, OUTPUT);
  pinMode(SD2, OUTPUT);
  pinMode(SD3, OUTPUT);

  //Configurasi WiFi
  Serial.begin(115200);
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(">>>>>>>>>><<<<<<<<<<");
  }
  Serial.println("");
  Serial.println("WiFi Connected !!!");
  Serial.println("IP Adress : ");
  Serial.print(WiFi.localIP());
}
void loop() {
  //~~~~~~~~~~~~~~~Pembacaan Multiplexer Analog~~~~~~~~~~~~~~~~~~//
  //Input Y0 OTI
  digitalWrite(SA0, LOW);
  digitalWrite(SA1, LOW);
  digitalWrite(SA2, LOW);
  int DetectSensorAY0 = analogRead(SIGA);
  float ValueSensorAY0 = DetectSensorAY0 * ((5000/19)/1023.0);
  delayMicroseconds(100);

  //Input Y1 WTI
  digitalWrite(SA0, HIGH);
  digitalWrite(SA1, LOW);
  digitalWrite(SA2, LOW);
  int DetectSensorAY1 = analogRead(SIGA);
  float ValueSensorAY1 = DetectSensorAY1 * ((5000/17.3)/1023.0);
  delayMicroseconds(100);

  //Input Y2 WTI 
  digitalWrite(SA0, LOW);
  digitalWrite(SA1, HIGH);
  digitalWrite(SA2, LOW);
  int DetectSensorAY2 = analogRead(SIGA);
  float ValueSensorAY2 = DetectSensorAY2 * ((5000/17.3)/1023.0);
  delayMicroseconds(100);

  //Input Y3
  digitalWrite(SA0, HIGH);
  digitalWrite(SA1, HIGH);
  digitalWrite(SA2, LOW);
  int DetectSensorAY3 = analogRead(SIGA);
  float ValueSensorAY3 = DetectSensorAY3 * (5.0/1023.0);
  delayMicroseconds(100);
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

  //~~~~~~~~~~~~~~~Pembacaan Multiplexer Digital~~~~~~~~~~~~~~~~~//
  //Input Y0
  digitalWrite(SD0, LOW);
  digitalWrite(SD1, LOW);
  digitalWrite(SD2, LOW);
  digitalWrite(SD3, LOW);
  int DetectSensorDY0 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y1
  digitalWrite(SD0, HIGH);
  digitalWrite(SD1, LOW);
  digitalWrite(SD2, LOW);
  digitalWrite(SD3, LOW);
  int DetectSensorDY1 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y2
  digitalWrite(SD0, LOW);
  digitalWrite(SD1, HIGH);
  digitalWrite(SD2, LOW);
  digitalWrite(SD3, LOW);
  int DetectSensorDY2 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y3
  digitalWrite(SD0, HIGH);
  digitalWrite(SD1, HIGH);
  digitalWrite(SD2, LOW);
  digitalWrite(SD3, LOW);
  int DetectSensorDY3 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y4
  digitalWrite(SD0, LOW);
  digitalWrite(SD1, LOW);
  digitalWrite(SD2, HIGH);
  digitalWrite(SD3, LOW);
  int DetectSensorDY4 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y5
  digitalWrite(SD0, HIGH);
  digitalWrite(SD1, LOW);
  digitalWrite(SD2, HIGH);
  digitalWrite(SD3, LOW);
  int DetectSensorDY5 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y6
  digitalWrite(SD0, LOW);
  digitalWrite(SD1, HIGH);
  digitalWrite(SD2, HIGH);
  digitalWrite(SD3, LOW);
  int DetectSensorDY6 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y7
  digitalWrite(SD0, HIGH);
  digitalWrite(SD1, HIGH);
  digitalWrite(SD2, HIGH);
  digitalWrite(SD3, LOW);
  int DetectSensorDY7 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y8
  digitalWrite(SD0, LOW);
  digitalWrite(SD1, LOW);
  digitalWrite(SD2, LOW);
  digitalWrite(SD3, HIGH);
  int DetectSensorDY8 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y9
  digitalWrite(SD0, HIGH);
  digitalWrite(SD1, LOW);
  digitalWrite(SD2, LOW);
  digitalWrite(SD3, HIGH);
  int DetectSensorDY9 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y10
  digitalWrite(SD0, LOW);
  digitalWrite(SD1, HIGH);
  digitalWrite(SD2, LOW);
  digitalWrite(SD3, HIGH);
  int DetectSensorDY10 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y11
  digitalWrite(SD0, HIGH);
  digitalWrite(SD1, HIGH);
  digitalWrite(SD2, LOW);
  digitalWrite(SD3, HIGH);
  int DetectSensorDY11 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y12
  digitalWrite(SD0, LOW);
  digitalWrite(SD1, LOW);
  digitalWrite(SD2, HIGH);
  digitalWrite(SD3, HIGH);
  int DetectSensorDY12 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y13
  digitalWrite(SD0, HIGH);
  digitalWrite(SD1, LOW);
  digitalWrite(SD2, HIGH);
  digitalWrite(SD3, HIGH);
  int DetectSensorDY13 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y14
  digitalWrite(SD0, LOW);
  digitalWrite(SD1, HIGH);
  digitalWrite(SD2, HIGH);
  digitalWrite(SD3, HIGH);
  int DetectSensorDY14 = digitalRead(SIGD);
  delayMicroseconds(100);

  //Input Y15
  digitalWrite(SD0, HIGH);
  digitalWrite(SD1, HIGH);
  digitalWrite(SD2, HIGH);
  digitalWrite(SD3, HIGH);
  int DetectSensorDY15 = digitalRead(SIGD);
  delayMicroseconds(100);
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
  
  Serial.println(ValueSensorAY0 + Space + ValueSensorAY1 + Space + ValueSensorAY2 + Space + ValueSensorAY3 + Space + DetectSensorDY0 + Space + DetectSensorDY1 + Space + DetectSensorDY2 + Space + DetectSensorDY3 + Space + DetectSensorDY4 + Space + DetectSensorDY5 + Space + DetectSensorDY6 + Space + DetectSensorDY7 + Space + DetectSensorDY8 + Space + DetectSensorDY9 + Space + DetectSensorDY10 + Space + DetectSensorDY11 + Space + DetectSensorDY12 + Space + DetectSensorDY13 + Space + DetectSensorDY15 + Space + DetectSensorDY15);
}
