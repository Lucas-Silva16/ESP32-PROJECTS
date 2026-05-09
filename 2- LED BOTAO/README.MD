# LED BOTAO - ESP32

Projeto de controlo de LED através de um botão utilizando o ESP32, com configuração de circuito Pull-up.

---

## Descrição

Este projeto utiliza o pino 2 do ESP32 para o LED e o pino 13 para o botão. Enquanto o botão estiver pressionado, o LED liga. Quando libertado, o LED desliga.

---

## Circuito

![Circuito LED Botao](photo_1_2026-05-09_18-47-23.jpg)

---

## Demonstração

[Ver vídeo do circuito a funcionar](video_2026-05-09_18-47-23.mp4)

---

## Código

```cpp
#define PIN_LED 2     // Pino do LED no ESP32
#define PIN_BUTTON 13 // Pino do botão no ESP32

void setup() {
  pinMode(PIN_LED, OUTPUT);   // LED como saída de sinal
  pinMode(PIN_BUTTON, INPUT); // Botão como entrada de sinal
}

void loop() {
  // Se o botão estiver pressionado (lê LOW no circuito Pull-up)
  if (digitalRead(PIN_BUTTON) == LOW) {
    digitalWrite(PIN_LED, HIGH); // Liga o LED
  } else {
    digitalWrite(PIN_LED, LOW);  // Desliga o LED
  }
}
```

---

## Como funciona

| Estado do botão | Leitura | Estado do LED |
|-----------------|---------|---------------|
| Pressionado     | LOW     | Ligado        |
| Libertado       | HIGH    | Desligado     |

> **Nota:** O circuito utiliza configuração Pull-up, onde o botão lê `LOW` quando pressionado e `HIGH` quando libertado.

---

## Hardware utilizado

- ESP32
- Botão (Push Button)
- LED
- Resistência (Pull-up)

## Software utilizado

- Arduino IDE
- Biblioteca ESP32 para Arduino
