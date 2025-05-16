// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  int contadorWhile = 5;
  
  while( contadorWhile >= 1 ){
    Serial.println (contadorWhile);
    contadorWhile--;
  }
    
    delay (5000);
}

void loop()
{
  
}