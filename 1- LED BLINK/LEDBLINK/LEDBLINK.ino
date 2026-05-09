
#define LED_BUILTIN 2
void setup() {
  // put your setup code here, to run once:

  //inicializa um pin LED_BUILTIN para output
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH); // desliga a led (HIGH +e voltagem )
  delay(5000);      // espera 1 sec
  digitalWrite(LED_BUILTIN, LOW); // liga a led (liga a led metendo a voltagem a LOW)
  delay(5000);   // espera 1 sec
}
