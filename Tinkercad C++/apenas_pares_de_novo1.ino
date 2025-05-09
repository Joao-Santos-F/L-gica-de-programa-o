/*

Faça um programa que receba um número de usuário e exiba este número, apenas 
se for par. Caso contrário informe apenas “DIGITE APENAS NÚMEROS PARES”.

*/

long numero;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("-------------------");
  Serial.println("digite o seu numero");
  Serial.println("-------------------");
  while(! Serial.available ());
  numero = Serial.parseInt();
  
  if (numero % 2 == 0) {
    Serial.println("-------------------");
    Serial.println("seu numero: " + String(numero) );
    Serial.println("Seu numero e par");
    Serial.println("-------------------");
  }else{
    Serial.println("--------------------");
    Serial.println("Apenas numeros pares"); }
    Serial.println("--------------------");
  
  delay(2000);
}