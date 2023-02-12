//Código Fotorresistencia
void setup() {
  pinMode(10,OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  if (sensorValue < 300) {
    digitalWrite(10,HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8,LOW);
    delay(1000);
  } 
  else if (sensorValue >= 300 && sensorValue <= 500) {
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    delay(1000);
  } 
  else {
    
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    delay(1000);
    
  }}

// Código sensor de temperatura
int PinRoj = 1;
int PinAzu = 2;
int PinVer = 3;
// Pin analógico de entrada para el sensor de temperatura
int pinTMP = A1;
// Pin para el buzzer
int PinBuz = 7;

// Variable donde se almacena el valor de la temperatura
int valorTMP = 0;

void setup()
{
// Configuramos como salidas los pines donde se conectan los LED y el buzzer
pinMode(PinRoj, OUTPUT);
pinMode(PinAzu, OUTPUT);
pinMode(PinVer, OUTPUT);
pinMode(PinBuz, OUTPUT);

// Configurar el puerto serial
Serial.begin(9600);

digitalWrite(PinRoj, HIGH);
digitalWrite(PinAzu, LOW);
digitalWrite(PinVer, LOW);
digitalWrite(PinBuz, LOW);
}

void loop()
{
valorTMP = analogRead(pinTMP);

Serial.print("Valor de la temperatura := ");
Serial.println(valorTMP);

if(valorTMP <= 125) // Hasta 10°C
{
digitalWrite(PinRoj, LOW);
digitalWrite(PinAzu, HIGH);
digitalWrite(PinVer, LOW);
}

if(valorTMP > 125 and valorTMP <= 160) // Entre 10°C hasta 28°C
{
digitalWrite(PinRoj, LOW);
digitalWrite(PinAzu, LOW);
digitalWrite(PinVer, HIGH);
}

if(valorTMP > 160) // Mayor a 28°C
{
digitalWrite(PinRoj, HIGH);
digitalWrite(PinAzu, LOW);
digitalWrite(PinVer, LOW);
digitalWrite(PinBuz, HIGH);
delay(1000);
digitalWrite(PinBuz, LOW);
}
}
