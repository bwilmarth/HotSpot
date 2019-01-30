#include <SPI.h>
#include <printf.h>
#include <nRF24L01.h>
#include <RF24_config.h>
#include <RF24.h>

RF24 radio(7, 8); // CE, CSN

const byte address[6] = "00001";

void setup() {
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}

int count = 0;

void loop() {
  char text[32];
  String message = String("Brian is cool " + count);
  message.toCharArray(text, message.length());
  radio.write(&text, sizeof(text));
  delay(1000);
  count++;
}
