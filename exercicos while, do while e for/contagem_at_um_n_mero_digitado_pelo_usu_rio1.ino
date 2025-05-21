
void setup() {
  Serial.begin(9600);

  Serial.println("Digite um numero");
}

void loop() {
  if (Serial.available() > 0) {
    int numero = Serial.parseInt();

    while (Serial.available() > 0) {
      Serial.read();
    }

    Serial.print("Contagem de 0 ate ");
    Serial.println(numero);

    Serial.println("Vamos la ");
    int contadorWhile = 0;
    while (contadorWhile <= numero) {
      Serial.println(contadorWhile);
      contadorWhile++;

      delay(500);
    }

  }

}