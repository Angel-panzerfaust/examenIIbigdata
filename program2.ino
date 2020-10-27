include<Arduino.h>

void setup()
{
	Serial.begin(9600)
	//Todo bien?
	pinMode(3,OUTPUT);
	// hola hola que tal, hay algun conflicto?
	pinMode(6,OUTPUT);
}
void loop()
{
	//se altera el codigo de esta parte
	//digitalWrite(5,HIGH);
	digitalWrite(5,LOW);
	//fin de las modificaciones p1

	delay(1000);
	analogWrite(3,250);
	Serial.print("hola");
	delay(220);
	analogRead(10,102);
}

