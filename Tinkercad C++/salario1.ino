// C++ code
//
String nome;
String cargo;
float salario;

void setup()
{
   Serial.begin(9600);
}

void loop()
{
   
  Serial.println("qual o nome do funcionario?");
  while(! Serial.available ());
  nome = Serial.readString();
  
  Serial.println("qual o cargo do funcionario?");
  while(! Serial.available ());
  cargo = Serial.readString();
  
  Serial.println("Qual o salario do funcionario?");
  while(! Serial.available ());
  salario = Serial.parseInt ();
  
  if( salario <=1000 ) {
    salario = salario * 1.10;
  } else {
    Serial.println("voce nao podera ganhar acrescimo"); }
      
  Serial.println("nome do funcionario: " + String(nome) );
  Serial.println("cargo do funcionario: " + String(cargo) );
  Serial.println("novo salario do funcionario: " + String(salario) );
  
  delay(50000);
}