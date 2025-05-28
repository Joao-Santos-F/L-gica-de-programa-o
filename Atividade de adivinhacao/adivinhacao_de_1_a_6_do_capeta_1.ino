#include <Servo.h>
Servo motor;

const int buzzer = 4;
const int LedVermelho = 7;
const int LedVerde = 10;
const int ledsAzuis[] = {4, 3, 2}; 
int acertos = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  pinMode(buzzer, OUTPUT);

  for (int i = 0; i < 3; i++) {
    pinMode(ledsAzuis[i], OUTPUT);
    digitalWrite(ledsAzuis[i], LOW); 
  }

  motor.attach(12);
  motor.write(0); 
  randomSeed(analogRead(0)); 
}

void loop()
{
  Serial.println("Tente adivinhar o numero da verdade (1 a 6):");

  while (!Serial.available());

  int tentativa = Serial.parseInt();

  while (Serial.available()) {
    Serial.read();
  }

  int numeroCerto = random(1, 7);

  if (tentativa == numeroCerto) {
    Serial.println("Ta certo, faz de novo ai monstrao.");

    digitalWrite(LedVerde, HIGH);
    delay(500);
    digitalWrite(LedVerde, LOW);

    if (acertos < 3) {
      digitalWrite(ledsAzuis[acertos], HIGH);
      acertos++;
    }

    if (acertos == 3) {
      Serial.println("Ela nunca te amou de verdade. Esta e a verdade");
      motor.write(90); 
    }

  } else {
    Serial.print("Errou! O numero era: ");
    Serial.println(numeroCerto);

    digitalWrite(buzzer, HIGH);
    digitalWrite(LedVermelho, HIGH);
    delay(500);
    digitalWrite(LedVermelho, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(1000);
}