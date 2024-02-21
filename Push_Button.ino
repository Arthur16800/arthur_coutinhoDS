//declaraçao da constante que armazena o pino do push button
#define pinoButton 8
#define led 9


//declaraçao da variavel de estado do botao
bool status = false;


void setup() {
  //definir a modalidade do pino

  pinMode(pinoButton, INPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);

  delay(1000);  //parada estrategica
}

void loop() {
  // lendo o pino digital atraves da constatante
  Serial.println(digitalRead(pinoButton));

  if (digitalRead(pinoButton) == 1 && status == false) {
    Serial.println("Botão apertado ON...");
    digitalWrite(led, HIGH);
    status = true;
  } else if (digitalRead(pinoButton) == 1 && status == true) {
    Serial.println("Botão apertado OFF...");
    digitalWrite(led, LOW);
    status = false;
  }

  delay(250);  //parada estrategica para leitura
}
