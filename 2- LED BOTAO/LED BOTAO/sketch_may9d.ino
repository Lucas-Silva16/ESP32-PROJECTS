#define PIN_LED 2     // DEFINIR O PINO NO ESP32 PARA O LED 
#define PIN_BUTTON 13 // DEFINIR O PINO NO ESP32 PARA O BOTAO

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);    // O LED VAI SER O OUTPUT (Saída de sinal)
  pinMode(PIN_BUTTON, INPUT);  // O BOTAO É O INPUT (Entrada de sinal)
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // SE O BOTAO ESTIVER A SER PRESSIONADO (Lê LOW no circuito Pull-up)
  if (digitalRead(PIN_BUTTON) == LOW ) {    
    digitalWrite(PIN_LED, HIGH); // O LED LIGA (HIGH envia energia)
  } else {
    digitalWrite(PIN_LED, LOW);  // SE O BOTAO NAO ESTIVER PRESSIONADO, O LED DESLIGA
  }

}
