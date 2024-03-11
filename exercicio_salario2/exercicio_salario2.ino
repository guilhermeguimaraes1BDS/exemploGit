float salario, perc, aumento, novoSalario;

  void setup() {
  Serial.begin(9600);
}

void loop() {
  //Recebendo o salário e o percentual
  Serial.println("Digite o salario do funcionario:");
  while (!Serial.available());
  salario = Serial.parseFloat();
  Serial.println(salario);

  Serial.println("Digite o percentual do aumento:");
  while (!Serial.available());
  perc = Serial.parseFloat();
  Serial.println(perc);

  aumento = salario * perc / 100;

  novoSalario = salario + aumento;

  Serial.print("Valor do aumento e:");
  Serial.println(aumento);
  Serial.print("Novo salario do funcionario e:");
  Serial.println(novoSalario);
  }
