# LED BLINK - ESP32

Projeto de blink de LED utilizando o LED integrado do ESP32, com intervalos de 5 segundos.

---

## Descrição

Este projeto utiliza o pino interno do ESP32 (`LED_BUILTIN = 2`) para fazer um LED piscar continuamente, ficando ligado 5 segundos e desligado 5 segundos.

---

## Circuito

Utilizado: 1 Led | 1 resistor de 220ohms | 2 fios para fazer a conexão |

![Circuito LED Blink](photo_1_2026-05-09_18-47-14.jpg)

---

## Demonstração

[Ver vídeo do circuito a funcionar](video_2026-05-09_18-47-14.mp4)

---

## Código

```cpp
#define LED_BUILTIN 2

void setup() {
  // Inicializa o pino LED_BUILTIN como OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Liga o LED (HIGH = tensão alta)
  delay(5000);                     // Espera 5 segundos
  digitalWrite(LED_BUILTIN, LOW);  // Desliga o LED (LOW = tensão baixa)
  delay(5000);                     // Espera 5 segundos
}
```

---

## Como funciona

| Estado        | Pino | Duração  |
|---------------|------|----------|
| LED ligado    | HIGH | 5000 ms  |
| LED desligado | LOW  | 5000 ms  |

> **Nota:** No ESP32, o LED integrado é ativo em `HIGH`, ao contrário de algumas placas Arduino onde é ativo em `LOW`.

---

## Hardware utilizado

- ESP32 (qualquer variante com LED integrado no pino 2)

## Software utilizado

- Arduino IDE
- Biblioteca ESP32 para Arduino
