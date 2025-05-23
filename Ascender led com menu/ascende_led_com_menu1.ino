// C++ code
//

int contador = 0;
int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 11;
int escolhas; 

void setup()
{
  Serial.begin(9600);

  pinMode(ledVerde, OUTPUT);

  pinMode(ledAmarelo, OUTPUT);

  pinMode(ledVermelho, OUTPUT);


  do{

    Serial.println("Escolha uma das seguintes opcoes");
    Serial.println(" 1 - Ligar Led Verde");
    Serial.println(" 2 - Desligar Led Verde");
    Serial.println(" 3 - Ligar Led Amarelo");
    Serial.println(" 4 - Desligar Led Amarelo");
    Serial.println(" 5 - Ligar Led Vermelho");
    Serial.println(" 6 - Desligar Led Vermelho");
    Serial.println(" 7 - Ligar Todos os Leds");
    Serial.println(" 8 - Desligar Todos os Leds");
    Serial.println(" 0 - Sair");
    while(! Serial.available()){}
    escolhas = Serial.parseInt ();

    switch(escolhas){

      case 1:
      digitalWrite(ledVerde, HIGH); 
      Serial.println("Led verde ligado");

      break;

      case 2:
      digitalWrite(ledVerde, LOW);
      Serial.println("Led verde desligado");

      break;

      case 3:
      digitalWrite(ledAmarelo, HIGH);
      Serial.println("Led amarelo ligado");

      break;

      case 4:
      digitalWrite(ledAmarelo, LOW);
      Serial.println("Led amarelo desligado");

      break;

      case 5:
      digitalWrite(ledVermelho, HIGH);
      Serial.println("Led vermelho ligado");

      break;

      case 6:
      digitalWrite(ledVermelho, LOW);
      Serial.println("Led vermelho desligado");

      break;

      case 7:
      digitalWrite(ledVerde, HIGH);
      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVermelho, HIGH);
      Serial.println("Todos os leds foram ligados");

      case 8:
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVermelho, LOW);
      Serial.println("Todos os leds foram desligados");

      break;

      case 9:
      Serial.println("A opcao escolhida foi sair");
      Serial.println("caso queira voltar com sua ex, nao temos esta opcao no momento");
      Serial.println("Caso queira voltar ao programa, basta reiniciar");

      break;

      default:
      Serial.println("Nao temos esta opcao no momento");

    } 
  } while (contador !=0);
}

void loop()
{

}