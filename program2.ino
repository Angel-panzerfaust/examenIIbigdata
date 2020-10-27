include<Arduino.h>

void setup()
{
	pinMode(5,OUTPUT);
	
}
void loop()
{
	digitalWrite(5,HIGH);
	digitalWrite(5,LOW);
	//fin de las modificaciones p1

	delay(500);
	analogWrite(10,234);
	analogRead(10,100);
}

