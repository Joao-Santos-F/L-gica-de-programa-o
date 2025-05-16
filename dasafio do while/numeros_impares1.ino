// C++ code
//
void setup()
{
  Serial.begin(9600);
  
   int contadorWhile = 3;
  
  while( contadorWhile <= 99 ){
    Serial.println(contadorWhile);
    contadorWhile+=3;
    
    delay (500);
    
  }
  
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}