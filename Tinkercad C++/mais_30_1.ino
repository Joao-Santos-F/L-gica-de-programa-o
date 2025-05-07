// C++ code
//
float salario;
String nome;
void setup()
{
   Serial.begin(9600);
}

void loop()
{
  Serial.println("qual o nome do funcionario?");
  while(! Serial.available ());
  nome = Serial.readString();
  
  Serial.println("Qual o salario do funcionario?");
  while(! Serial.available ());
  salario = Serial.parseInt ();
    
     if( salario <=500 ) {
    salario = salario * 1.3;
  } else {
       Serial.println("voce nao tem direito a aumento"); }
  Serial.println("nome do funcionario: " + String(nome) );
       Serial.println("novo salario do funcionario: " + String(salario) );
  
  delay(50000);
}