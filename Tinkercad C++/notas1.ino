// C++ code
//

int nota = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  Serial.println("Qual foi sua nota?");
  while(! Serial.available ());
  nota = Serial.parseInt ();
  
  
  
  Serial.println("nota: "+ String(nota));
  
  if( nota >=6 , nota<=5)
    Serial.println("reprovado");
     else
    Serial.println("aprovado");
  }