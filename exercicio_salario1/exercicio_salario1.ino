float salario, novoSalario;

void setup() {
  //Inicializa a comunicação
  Serial.begin(9600);
}

void loop() {
  Serial.print("Digite o salario do funcionario:");

  //Aguarda a entrada
  while (!Serial.available());
  //Lê o salario da entrada
  salario = Serial.parseFloat();
  Serial.println(salario);
  
  //Calcula o novo salário com um aumento de 25%
  novoSalario = salario * 1.25;
  Serial.print("O novo salario com aumento de 25% e:");
  Serial.println(novoSalario);

}
