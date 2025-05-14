/*

Faça um programa que receba o nome, salário e código correspondente ao cargo do 
funcionário e imprima o seu nome, salário, código, cargo, Percentual de aumento e 
salário com aumento de acordo com o percentual da tabela abaixo:
Código Cargo Percentual
1 Escriturário 50%
2 Secretário 35%
3 Caixa 20%
4 Gerente 10%
5 Diretor O cargo não recebera aumento

*/

float escriturario = 50;
float secretario = 35;
float caixa = 20;
float gerente = 10;
float salario;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Escolha seu cargo:");
  Serial.println("    1 - Escriturario");
  Serial.println("    2 - Secretario");
  Serial.println("    3 - Caixa");
  Serial.println("    4 - Gerente");
  Serial.println("    5 - Diretor");
  while(!Serial.available());
  int cargo = Serial.parseInt();
  
   switch(cargo)
  {
    case 1:
        Serial.println("------------------------------");
        Serial.println("Cargo escolhido: Escriturario");
        Serial.println("------------------------------");
     
     Serial.println("----------------------------");
  Serial.println("Qual seu salario na empresa? ");
  Serial.println("----------------------------");
  while (!Serial.available());
  salario = Serial.parseFloat();
    
     salario = salario + (salario * (escriturario / 100.0));
     
    Serial.println("----------------------");
    Serial.println("novo salario: " + String(salario) );
    Serial.println("----------------------");
     
    break;
    case 2:
     Serial.println("---------------------------");
     Serial.println("Cargo escolhido: Secretario");
     Serial.println("---------------------------");
     
     Serial.println("----------------------------");
  Serial.println("Qual seu salario na empresa? ");
  Serial.println("----------------------------");
  while (!Serial.available());
  salario = Serial.parseFloat();
    
     salario = salario + (salario * (secretario / 100.0));
     
    Serial.println("----------------------");
    Serial.println("novo salario: " + String(salario) );
    Serial.println("----------------------");
     
    break;
    case 3:
     Serial.println("----------------------");
     Serial.println("Cargo escolhido: Caixa");
     Serial.println("----------------------");
     
     Serial.println("----------------------------");
  Serial.println("Qual seu salario na empresa? ");
  Serial.println("----------------------------");
  while (!Serial.available());
  salario = Serial.parseFloat();
    
     salario = salario + (salario * (caixa / 100.0));
     
    Serial.println("----------------------");
    Serial.println("novo salario: " + String(salario) );
    Serial.println("----------------------");
     
    break;
    case 4:
     Serial.println("------------------------"); 
     Serial.println("Cargo escolhido: Gerente");
     Serial.println("------------------------");
     
     Serial.println("----------------------------");
  Serial.println("Qual seu salario na empresa? ");
  Serial.println("----------------------------");
  while (!Serial.available());
  salario = Serial.parseFloat();
    
     salario = salario + (salario * (gerente / 100.0));
     
    Serial.println("----------------------");
    Serial.println("novo salario: " + String(salario) );
    Serial.println("----------------------");
     
     break;
     case 5:
     Serial.println("------------------------");
     Serial.println("Cargo escolhido: Diretor");
     Serial.println("------------------------");
     
     Serial.println("-------------------------");
     Serial.println("Voce nao recebera aumento");
     Serial.println("-------------------------");
     break;
    default:
        Serial.println("nao temos este cargo, revise os dados");
}
  
  delay(5000);

}