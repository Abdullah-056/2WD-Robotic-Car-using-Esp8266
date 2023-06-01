#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>

#define BLYNK_TEMPLATE_ID "TMPL6WvHdnNhf"
#define BLYNK_TEMPLATE_NAME "FULL"
#define BLYNK_AUTH_TOKEN "utzKu37NWz3myTzkaKF_tAkl5WRER8TU"

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Hn G";         //Wifi name
char pass[] = "atozpasswordhe";   //Password

BLYNK_WRITE(V0){
  digitalWrite(D0, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
}

BLYNK_WRITE(V1){
  digitalWrite(D0, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
}

BLYNK_WRITE(V2){
  digitalWrite(D0, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}

BLYNK_WRITE(V3){
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
}

BLYNK_WRITE(V4){
  digitalWrite(D0, LOW);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
}


void setup() {
  // put your setup code here, to run once:

pinMode(D1, OUTPUT);
pinMode(D2, OUTPUT);
pinMode(D0, OUTPUT);
pinMode(D3, OUTPUT);
Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
Blynk.run();
}