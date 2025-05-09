// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  String nome = "Edu paz";
  Serial.println("nome e: " + nome);
  nome = "Bia paz";
}

void loop()
{
  String nomedele = "Paulo Vieira";
  int idade = 16;
  if ( nomedele == "Paulo Vieira" )
  {
    idade = 16;
  }
  
  Serial.println("nome dele e: " + nomedele);
  Serial.println("idade dele e: " + String(idade));
  
  delay(10000);
  
}