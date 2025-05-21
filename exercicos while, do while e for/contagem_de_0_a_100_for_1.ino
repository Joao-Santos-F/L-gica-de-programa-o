/*

Contagem de 0 a 100 - Faça um programa que mostre no Serial Monitor os números
de 0 até 100 usando for.

*/


void setup()
{
  Serial.begin(9600);
  
  for ( int numero = 1; numero <= 100; numero++) {
  Serial.println(numero);
  }
  
}
void loop()
{
  
}