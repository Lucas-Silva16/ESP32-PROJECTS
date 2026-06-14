#define LED_PIN 18
#define CHN 0
#define FRQ 1000
#define PWM_BIT 8

void setup() {
  ledcAttachChannel(LED_PIN, FRQ, PWM_BIT, CHN);

}

void loop() {
  for (int i=0 ; i <255; i++ ){
    ledcWrite(LED_PIN, i);
    delay(10);
  }
    for (int i=255 ; i > -1; i-- ){
    ledcWrite(LED_PIN, i);
    delay(10);
  }
}
