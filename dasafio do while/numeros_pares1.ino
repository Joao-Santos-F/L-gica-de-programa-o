// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  int contadorWhile = 2;
  
  while( contadorWhile <= 100 ){
    Serial.println(contadorWhile);
    contadorWhile+=2;
    
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