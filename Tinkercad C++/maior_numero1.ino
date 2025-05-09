// C++ code
//

int num1; 
int num2;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  
  Serial.println("Digite o primeiro numero:");
  while (!Serial.available());
  num1 = Serial.parseInt();

  Serial.println("Digite o segundo numero:");
  while (!Serial.available());
  num2 = Serial.parseInt();

  if (num1 > num2) {
    Serial.print("O maior numero e: ");
    Serial.println(num1);
 
  } else {
    Serial.println("Os dois numeros sao iguais.");
  }

  delay(3000);
}
