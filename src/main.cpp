#include <Arduino.h>


struct Pergunta {
  const char* enunciado;
  const char* alternativas[4];
  uint8_t correta;   
};



void setup() {

  Serial.println("Electronic Quiz System iniciado!");
  Serial.begin(115200);

}



void loop() {
}

