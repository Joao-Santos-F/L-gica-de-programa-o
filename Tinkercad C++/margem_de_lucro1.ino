// C++ code
//
float compra;
float percentual;
float margem;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
   Serial.println("digite preco do produto?");
  while(! Serial.available ());
  compra = Serial.parseFloat();
  
  Serial.println("digite o percentual a ser aplicado no produto");
  while(! Serial.available ());
  percentual = Serial.parseFloat();
  
  //calculo
  margem = compra * (percentual / 100);
  
  
  if(percentual < 50) {
  Serial.println("margem de lucro inferior a 50%, o produto tera o valor de: " + String(margem + compra) );
  }
}