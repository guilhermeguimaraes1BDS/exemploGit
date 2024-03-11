float salario_atual, salario_receber, grat, imp;

void setup(){

  Serial.begin(9600);
  
  delay(1000);
}

void loop(){

Serial.print("Digite o salario base: ");
  salario_atual = aguardaEntrada();
  Serial.println(salario_atual);
  delay(1000);
  
  grat = salario_atual * 5/100 ;
  imp = salario_atual * 7/100 ;
  salario_receber = salario_atual + grat - imp ;
  
  Serial.print("O salario a receber e de: ");
  Serial.println(salario_receber);

}
float aguardaEntrada()
{
  while(!Serial.available())
  {
  
  }
  
  return Serial.parseFloat();
}
