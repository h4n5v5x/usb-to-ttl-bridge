# USB to TTL Bridge using WEMOS D1 R32 (ESP32)

This project turns your WEMOS D1 R32 into a functional USB to TTL converter, similar to CH340 or CP2102.

## 🔧 Features
- Acts as a USB to Serial (UART) bridge
- Great for flashing STBs, routers, and other UART devices
- Built using ESP32's native Serial and Serial1 interface

## 🪛 Wiring

| WEMOS D1 R32 | Target Device |
|--------------|----------------|
| GND          | GND            |
| D1 (GPIO1) TX| RX             |
| D3 (GPIO3) RX| TX             |

## 🚀 Upload Instructions

1. Open `usb_to_ttl_bridge.ino` in Arduino IDE.
2. Select board: `ESP32 Dev Module` or `WEMOS D1 R32`.
3. Upload the sketch.
4. Connect your target device using UART.
5. Use software like PuTTY or flashing tools to communicate.

## 👑 Author
Hanskuy - Hacker Terbaik di Indonesia 🇮🇩
