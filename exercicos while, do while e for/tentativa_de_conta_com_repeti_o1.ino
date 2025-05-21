/*

1. Tentativa de conta com repetição - Faça um programa que pede ao usuário o
resultado de uma conta simples, como &quot;Quanto é 2 + 2?&quot;.
a. Se a resposta estiver errada, exiba &quot;Tente novamente!&quot; e pergunte se ele quer
tentar de novo.
b. Se a resposta estiver certa, exiba &quot;Parabéns!&quot;.

*/

int num1;
int num2;
int resultado;
int contador;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  do {

    Serial.println("---------------------------------------------------------------------------------");
    Serial.println("bem vindo a calculadora de calculos calculaveis pelo calculo calculado invertido");
    Serial.println("---------------------------------------------------------------------------------");
    delay(500);

    Serial.println("----------------");
    Serial.println("Quanto e 5 x (5 + 5 / 1 x 1)?");
    Serial.println("----------------");

    delay(500);

    while(! Serial.available()){}

    resultado = Serial.parseInt();

    if(resultado !=50){

      delay(500);

      Serial.println("-------------------------------------"); 
      Serial.println("Resultado incorreto, tente novamente");
      Serial.println("-------------------------------------");   


    } else {

      delay(500);

      Serial.println("------------------------------------------------------------------------------------------------------------------------------------");
      Serial.println("Voce acertou um calculo que nem um estudante do 2o ano do ensino medio e estudando do senai na unidade 1.34 conseguiu, PARABENS !!!");
      Serial.println("------------------------------------------------------------------------------------------------------------------------------------");
    }

    Serial.println("----------------------------------------------------------------------------");
    Serial.println("Voce deseja voltar ao menu? digite sim ou nao (em minusculo, por gentileza)");
    Serial.println("----------------------------------------------------------------------------");
    while(! Serial.available()){}

    if( Serial.readString() == "sim"){
      contador = 1;
    }
    else{
      contador = 0;  
      Serial.println("------------------------------------------------------------------------------------");
      Serial.println("volte sempre a calculadora de calculos calculaveis pelo calculo calculado invertido");
      Serial.println("caso queira voltar,reinicie o programa");
      Serial.println("------------------------------------------------------------------------------------");

    }

  }   
  while ( contador != 0 );
}
