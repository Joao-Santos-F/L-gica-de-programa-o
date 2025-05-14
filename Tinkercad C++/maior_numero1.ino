// C++ code
//
<<<<<<< HEAD
=======

>>>>>>> 132bd56de4e66e14cbc28bb668f26883a636ffc5
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
<<<<<<< HEAD
  } else {
    Serial.print("O maior numero e: ");
    Serial.println(num2);
  
=======
 
  } else {
    Serial.println("Os dois numeros sao iguais.");
>>>>>>> 132bd56de4e66e14cbc28bb668f26883a636ffc5
  }

  delay(3000);
}
