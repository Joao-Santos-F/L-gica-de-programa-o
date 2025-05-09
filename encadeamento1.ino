/*
Estruturas condicionais encadeadas (3 ou mais)

infantil - 5 ate 7 anos
cadete - 8 ate 11 anos
juvenil - 12 ate 14 anos
junior - 15 ate 17 anos
adulto - 18 anos ou mais
*/

int idade = 0;

void setup()
{
  Serial.begin(9600);
  
  Serial.println("----------------");
  Serial.println("Academia do Davi");
  Serial.println("----------------");
  Serial.println(); 
  
  //qual a idade dele?
  
   Serial.println("qual a sua idade?");
  while (!Serial.available());
  idade= Serial.parseInt();
  
  //processamento
  
  Serial.println("Voce possui: " + String(idade) + " anos");
  if ( idade >=0 && idade <=4 ){
    Serial.println("Nao podera ser cadastrado");
    } else if ( idade >= 5 && idade <= 7 ){ 
    Serial.println("Cadastrado na categoria infantil");
    } else if (idade >= 8 && idade <= 11 ) {
    Serial.println("Cadastrado na categoria cadete");
    } else if (idade >= 12 && idade <= 14 ) {
    Serial.println("Cadastrado na categoria juvenil");
    } else if (idade >= 15 && idade < 18 ) {
    Serial.println("Cadastrado na categoria junior");
    } else {
    Serial.println("Cadastrado na categoria adulto");
  }
  
}

void loop()
{
  
}  
  delay(3000);
}