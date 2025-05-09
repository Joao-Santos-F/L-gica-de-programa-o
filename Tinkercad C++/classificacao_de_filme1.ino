/*

Categorias de classificação:
Até 9 anos: “Apenas filmes infantis”
De 10 até 13 anos: “Filmes infantis e infantojuvenis”
De 14 até 17 anos: “Filmes até classificação 14 anos”
De 18 até 59 anos: “Todos os tipos de filmes”
60 anos ou mais: “Todos os tipos de filmes + desconto para idosos”
Idade negativa ou maior que 120: “Idade inválida, verifique os dados”

*/

int idade;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  // qual a sua idade?
  Serial.println("----------------");
  Serial.println("qual a sua idade");
  Serial.println("----------------");
  while (!Serial.available());
  idade= Serial.parseInt();
  
  //processamento
   Serial.println("----------------");
  Serial.println("Voce tem: " + String(idade) + " anos");
   Serial.println("----------------");
  if ( idade >= 1 && idade <=9 ){
  Serial.println("Apenas filmes infantis");
    } else if ( idade >= 10 && idade <= 13 ) {
    Serial.println("Filmes infantis e infantojuvenis");
    } else if (idade >= 14 && idade <= 17 ) {
    Serial.println("Filmes ate classificacao 14");
    } else if (idade >= 18 && idade <= 59 ) {
    Serial.println("Todos os tipos de filmes");
    } else if (idade >= 60 && idade < 120 ) {
    Serial.println("Todos os tipos de filmes + desconto para idosos");
    } else {
    Serial.println("Idade invalida, por favor, verifique os dados");
  }
    delay(50000);
  
}