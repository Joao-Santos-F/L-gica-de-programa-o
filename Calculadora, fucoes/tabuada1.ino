//C++
//

void setup() {
  Serial.begin(9600);

  Serial.println("Escolha a tabuada de 1 a 10:");
  
  while (!Serial.available()) {}

  int numero = Serial.parseInt();

  if (numero >= 1 && numero <= 10) {
    Serial.print("Tabuada do ");
    Serial.println(numero);
    
    // Mostra a tabuada de 1 a 10
    for (int num2 = 1; num2 <= 10; num2++) {
      Serial.print(numero);
      Serial.print(" x ");
      Serial.print(num2);
      Serial.print(" = ");
      Serial.println(numero * num2);
    }
  } else {
    Serial.println("nao temos este numero disponivel no momento, aguarde proximas atualizacoes");
  }
}

void loop() 
{

}
