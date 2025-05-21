/*

Contagem de 5 em 5

*/
void setup()
{
  Serial.begin(9600);

  for ( int numero = 5; numero <=100; numero +=5) {
    delay(100);
    Serial.println (numero);  
  }
}

void loop()
{

}