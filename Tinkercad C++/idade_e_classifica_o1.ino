/*

Faça um programa que receba a idade de uma pessoa e classifique usando o 
seguinte critério:
Idade Classificação
0 a 2 anos Recém-Nascido
Recém-Nascido Criança
12 a 19 anos Adolescente
20 a 55 anos Adulto
Acima de 55 anos Idoso

*/

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int idade;
  
  Serial.println("Qual a idade pendente?");
  while(! Serial.available ());
  idade = Serial.parseInt ();
  
  if ( idade >= 0 && idade <= 2){
  Serial.println("Voce e recem-nascido");
  } else if ( idade >= 3 && idade <= 11 ) {
  Serial.println ("Voce e crianca");
  } else if ( idade >= 12 && idade <= 19 ) {
  Serial.println("Voce e adolescente"); 
  } else if ( idade >= 20 && idade <= 55 ) {  
  Serial.println("Voce e adulto");  
  } else if ( idade >50 && idade <120) {  
  Serial.println("Voce e idoso"); 
  } else {
  Serial.println("idade invalida, por favor, verifique os dados");  
  }
  
  delay(5000);
}