/*

- Faça um programa que simula um robô de
atendimento. Ele deve mostrar o seguinte menu:

1 - Ver telefone
2 - Ver endereço
3 - Sair

a) Se o usuário escolher a opção 1, exiba o telefone: 7070-7070
b) Se o usuário escolher a opção 1, exiba o endereço: Rua Niterói 180 – São Caetano do
Sul – SP.
*/

int contador = 0;
String telefone = "7070-7070";
String endereco = "Rua Niteroi 180 , Sao Caetano do Sul , SP.";
int escolhas;

void setup()
{
  Serial.begin(9600);

  do{

    Serial.println("Escolha uma das seguintes opcoes");
    Serial.println(" ");
    Serial.println(" 1 - Ver telefone");
    Serial.println(" 2 - Ver Endereco");
    Serial.println(" 3 - Sair");  
    while(! Serial.available()){}
    escolhas = Serial.parseInt ();

    switch(escolhas){

      case 1:
      Serial.println("Opcao escolhida: Ver telefone");
      Serial.println("Telefone: " + telefone);

      break;

      case 2:
      Serial.println("opcao escolhida: Ver endereco");
      Serial.println("Endereco: " + endereco); 

      break;

      case 3:
      Serial.println("opcao escolhida: Sair");
      Serial.println("caso queira voltar, por gentileza, reinicie o programa");

      break;

      default:
      Serial.println("Nao temos esta opcao no momento");


    }

  } while (contador !=0);
}

void loop()
{

}