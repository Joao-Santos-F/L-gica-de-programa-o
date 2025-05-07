// C++ code
//
float numero;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("digite o seu numero");
  while(! Serial.available ());
  numero = Serial.parseFloat();
  
  if (numero >=0) {
    Serial.println("Seu numero e positivo");  
    }else{
    Serial.println("seu numero e negativo"); }
  
  delay(1000);
}