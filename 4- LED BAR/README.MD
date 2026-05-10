# LED BAR - ESP32

LED bar sequence project using 10 LEDs controlled by the ESP32, creating a back-and-forth animation effect.

---

## Description

This project controls a 10-segment LED bar using pins 15, 2, 0, 4, 5, 18, 19, 21, 22 and 23 of the ESP32. The LEDs light up one at a time from left to right, then right to left, creating a continuous sweeping effect with 100ms intervals between each step.

---

## Circuit

Components used: 1 LED bar (10 segments) | 10 x 220 ohm resistors | 10 jumper wires

![LED Bar Circuit](photo_2026-05-10_15-32-17.jpg)

![LED Bar Circuit 2](photo_2026-05-10_15-32-23.jpg)

---

## Demo

[Watch on YouTube](https://youtube.com/shorts/k1Tk2ABbe6c)

---

## How it works

| Step      | Direction     | Interval |
|-----------|---------------|----------|
| Forward   | Left to right | 100 ms   |
| Backward  | Right to left | 100 ms   |

> **Note:** Each LED turns on briefly then turns off before the next one activates, creating a sweeping effect across the bar.

---

## Hardware used

- ESP32
- 1 x LED bar (10 segments)
- 10 x 220 ohm resistors
- 10 jumper wires

## Software used

- Arduino IDE
- ESP32 library for Arduino
