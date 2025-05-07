// C++ code
//
long numero;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
   Serial.println("digite o seu numero");
  while(! Serial.available ());
  numero = Serial.parseInt();
  
  if (numero % 2 == 0) {
 Serial.println("Seu numero e par");
    
 }else{
    Serial.println("seu numero e impar"); }
  
  delay(500);
}