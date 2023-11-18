#include <RF24.h>
#include <nRF24L01.h>

RF24 radio(7, 8);

const byte address[6] = "00001";
const int num_reps = 50;

void Jammer433mHz(){
  tone(5, 15000);
}

void Jammer2400mHz(){
  const char text[] = "xxxxxxxxxxxxxxxx";
  for (int i = 0; i < 14; i++) {
    radio.setChannel(i);
    radio.write(&text, sizeof(text));
  }
}

void setup() {
  // radio.begin();
  // radio.setPALevel(RF24_PA_HIGH);
  // radio.setDataRate(RF24_2MBPS);
}

void loop() {
  // Jammer2400mHz()
  // Jammer433mHz()
}
