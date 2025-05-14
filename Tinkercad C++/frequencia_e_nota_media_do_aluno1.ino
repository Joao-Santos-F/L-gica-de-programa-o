/*

Calcule a média entre DUAS notas.
Verifique se o aluno foi APROVADO.
Aprovado se média é MAIOR OU IGUAL A 6 e SE A frequência É MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota
Exiba se foi REPROVADO por frequência.
Exiba se foi REPROVADO 

frequência e média da nota .
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!".

*/

float nota1;
float nota2;
float media;
int frequencia;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  // qual a nota dele?
  
  Serial.println("qual a sua primeira nota?");
  while (!Serial.available());
  nota1= Serial.parseFloat();
  
  Serial.println("qual a sua segunda nota?");
  while (!Serial.available());
  nota2= Serial.parseFloat();
  
  Serial.println("qual a sua porcentagem de frequencia?");
  while (!Serial.available());
  frequencia= Serial.parseInt();
  
  //calculo da media
  
  media = (nota1 + nota2) / 2;
  
    if ( media <=5.0 ){
    Serial.println ("reprovado");
    Serial.println("nota: "+ String(media)); //codigo pego de outro tinkercad
      
  } else if ( media >=6.0 && media <=9.0 ){
    Serial.println("nota: "+ String(media)); //codigo pego de outro tinkercad
      
  } else if (media = 10) {
    Serial.println("nota: "+ String(frequencia)); //codigo pego de outro tinkercad
  }
  
   if ( frequencia <= 74 , media <=10){
    Serial.println("Voce foi reprovado por faltas");
    Serial.println("frequencia: "+ String(frequencia));
   } else if ( frequencia >=75 , media >=6 && media <=9 ){
    Serial.println("voce passou");
   } else if ( frequencia == 100 , media ==10) {
    Serial.println("voce passou com satisfacao total!");
  }
   

  delay(50000);
}