/*

Contagem até um número digitado pelo usuário - Faça um programa que peça para o usuário digitar um número N, e depois mostre os números de 0 até N.

*/

int numerolimite;  

void setup() {
  Serial.begin(9600);
  Serial.println("Escolha um numero que eu irei contar ate ele:");
}

void loop() {
  if (Serial.available() > 0) {
    numerolimite = Serial.parseInt();
    
    Serial.print("Contando de 0 ate ");
    Serial.println(numerolimite);
    
    for (int numero = 0; numero <= numerolimite; numero++) {
      Serial.println(numero);
      delay(100);
    }
    
    Serial.println("Contagem concluida!");
    
  }
}