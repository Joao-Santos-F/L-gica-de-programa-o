/*

Uma empresa decide dar aumento aos funcionários de acordo com o seu cargo, 
disposto na tabela abaixo:
Cargo % Aumento

Produção 6.5

Administrativo 7.5

Diretoria 12

De acordo com a tabela acima faça um programa que receba o cargo e o salário de 
um funcionário e calcule e imprima o salário reajustado

*/

float salario;
String cargo;
float producao = 6.5;
float administracao = 7.5;
int diretoria = 12;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  //pergunta qual o cargo
  Serial.println("--------------------------");
  Serial.println("Qual seu setor na empresa? ");
  Serial.println("--------------------------");
  while (!Serial.available());
  cargo = Serial.readString();
  
  Serial.println("----------------------------");
  Serial.println("Qual seu salario na empresa? ");
  Serial.println("----------------------------");
  while (!Serial.available());
  salario = Serial.parseFloat();
  
  //processamento
  
  
  Serial.println("seu setor na empresa: " + String(cargo) );
  if ( cargo == "producao" ) {
    salario = salario + (salario * (producao / 100.0));
    Serial.println("----------------------");
    Serial.println("novo salario: " + String(salario) );
    Serial.println("----------------------");
  } else if (cargo == "administracao" ) {
    salario = salario + (salario * (administracao / 100.0));
    Serial.println("----------------------");
    Serial.println("novo salario: " + String(salario) ); 
    Serial.println("----------------------");
  } else if (cargo == "diretoria" )  {
    salario = salario + (salario * (diretoria / 100.0));
    Serial.println("----------------------");
    Serial.println("novo salario: " + String(salario) );
    Serial.println("----------------------");
  } else {
    Serial.println("--------------------------------");
    Serial.println("nao temos este cargo na empresa"); 
    Serial.println("--------------------------------");
}
  delay(50000);
  
}
 