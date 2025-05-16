int escolhaDaOperacao;
float resultado;

  float somar(float num1 , float num2){

  resultado = num1 + num2;

  //Serial.println("-----------------------");
  //Serial.println("Resultado: " + String(resultado) );
  //Serial.println("-----------------------");
  return resultado;

}

  float subtrair(float num1 , float num2){

  resultado = num1 - num2;

  Serial.println("-----------------------");
  Serial.println("Resultado: " + String(resultado) );
  Serial.println("-----------------------");
  return resultado;

}

  float divisao(float num1 , float num2){

  resultado = num1 / num2;

  Serial.println("-----------------------");
  Serial.println("Resultado: " + String(resultado) );
  Serial.println("-----------------------");
  return resultado;

}

  float multiplicacao(float num1 , float num2){

  resultado = num1 * num2;

  Serial.println("-----------------------");
  Serial.println("Resultado: " + String(resultado) );
  Serial.println("-----------------------");
  return resultado;

}

void setup()
{
  Serial.begin(9600);

  int contador = 0;
  float numero1;
  float numero2;


  do{ 
    Serial.println("Bem-Vindo(a) a calculadora de calculos calculaveis pelo calculo do calculo calculado por outro calculo calculado pelo calculo");
    Serial.println("1 - somar");
    Serial.println("2 - subtrair");
    Serial.println("3 - dividir");
    Serial.println("4 - multiplicar");
    while(! Serial.available()){}
    escolhaDaOperacao = Serial.parseInt ();


    Serial.println("---------------------------------------------------------------------------------------");
    Serial.println("Para conseguirmos fazer a operacao matematica, precisamos que voce digite dois numeros");
    Serial.println("---------------------------------------------------------------------------------------");
    Serial.println("-------------------------");
    Serial.println("digite o primeiro numero");
    Serial.println("-------------------------");
    while(! Serial.available()){}
    numero1 = Serial.parseFloat ();

    Serial.println("-------------------------");
    Serial.println("digite o segundo numero");
    Serial.println("-------------------------");
    while(! Serial.available()){}
    numero2 = Serial.parseFloat ();


    switch(escolhaDaOperacao){

      case 1:

      float retornoresultado;
      retornoresultado = somar(numero1 , numero2);
      //somar(numero1 , numero2 ); //estou passando os valores via parametro

      Serial.println("-----------------------------");
      Serial.println("Operacao escolhida foi somar");
      Serial.println("-----------------------------");


      break;
      case 2:
      Serial.println("--------------------------------");
      Serial.println("Operacao escolhida foi subtrair");
      Serial.println("--------------------------------");

     
      retornoresultado = subtrair(numero1 , numero2);
      //subtrair(numero1 , numero2);


      break;
      case 3:
      Serial.println("-------------------------------");
      Serial.println("Operacao escolhida foi dividir");
      Serial.println("-------------------------------");

      
      retornoresultado = divisao(numero1 , numero2);
      //divisao(numero1 , numero2);

      break;
      case 4:
      Serial.println("-----------------------------------");
      Serial.println("Operacao escolhida foi multiplicar");
      Serial.println("-----------------------------------");

      
      retornoresultado = multiplicacao(numero1 , numero2);
      //multiplicacao(numero1 , numero2);


      break;
      default:
      Serial.println("------------------------------------------------------------------------------------------------------------------");
      Serial.println("Se voce ver bem, vai perceber que ela nunca te amou de verdade e te usou apenas pra suprir seu ego sob sua pessoa");
      Serial.println("------------------------------------------------------------------------------------------------------------------");

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
      Serial.println("----------------------------------------------------------------------");  
      Serial.println("Ela nunca te amou de verdade, nem voce, que nao me usou de verdade");
      Serial.println("caso queira voltar,reinicie o programa");
      Serial.println("--------------------------------------------------------------------");
    }


  }
  while( contador != 0 ); //se o contador for diferente de 0, o mesmo repete
}

void loop()
{
  //sem funcoes
}