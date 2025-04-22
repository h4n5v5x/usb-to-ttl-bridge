// USB to TTL Bridge Firmware for WEMOS D1 R32 (ESP32)
// By: Hanskuy Hacker Terbaik di Indonesia

void setup() {
  Serial.begin(115200);   // USB Serial (to PC)
  Serial1.begin(115200);  // UART TTL (GPIO1=TX, GPIO3=RX)
}

void loop() {
  while (Serial.available()) {
    Serial1.write(Serial.read());
  }
  while (Serial1.available()) {
    Serial.write(Serial1.read());
  }
}
