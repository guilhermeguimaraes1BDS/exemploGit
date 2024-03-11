#define pinoButton 8 /* Declaração da Constante que armazena o pino do pushbutton*/
bool status = false;/*Declaração de Variável do Botão */
int ledVermelho = 7;

void setup() {
  pinMode(pinoButton, INPUT); // Definir a modalidade do Pino 
  pinMode(ledVermelho, OUTPUT);
  Serial.begin(9600); //Começa a Comunicação com o Serial Monitor 

 delay(1000); //parada estratégica

}
void loop() {
  
  Serial.println(digitalRead(pinoButton)); //Lendo o Pino Digital através da Constante

  if(digitalRead(pinoButton) == 1 && status == false){
    Serial.println("Botão apertando ON... ");
    status = true;
    digitalWrite(ledVermelho, HIGH);
  }
  else if(digitalRead(pinoButton) == 1 && status == true) {
    Serial.println("Botão apertado OFF...");
    status = false;
    digitalWrite(ledVermelho, LOW);
  } 
  delay(1000); //Parada estratégica
}