int senhaCorreta = 9756;
int tentativas = 1;

void setup() {
  Serial.begin(9600);

  do {
    Serial.println("Qual sua senha para efetuar o login?");


    while (!Serial.available()) {}


    int senhaDigitada = Serial.parseInt();

    if (senhaDigitada == senhaCorreta) {
      Serial.println("Senha correta, login efetuado com sucesso");
      tentativas = 0;
    } else {
      Serial.println("Senha incorreta, tente novamente");
      tentativas++;
      if ( tentativas == 3 ) {
      Serial.println ("Bloqueando por 3 minnutos, errou 3 vezes");
      delay(180000);
      } 
        
    }

    delay(1000);  

  } while (tentativas != 0);
}

void loop() 
{

}
