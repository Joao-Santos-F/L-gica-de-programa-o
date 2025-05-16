void setup() {
  Serial.begin(9600);

  int contador = 60;

  while (contador <= 101) {
    Serial.println(contador);
    delay(500);

    if (contador < 80) {
      contador += 2;
    }
    
    else if (contador == 80) {
      contador = 81;
    }
    
    else {
      contador += 2;
    }
  }
}

void loop() {
  // Nada aqui
}
