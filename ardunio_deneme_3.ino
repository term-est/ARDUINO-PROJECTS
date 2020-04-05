#define POTANTIOMETER A0


void setup() 
{
	Serial.begin(9600);
	Serial.println("Potansiyometre deger okuma"); 
}

void loop()
{
	Serial.println(analogRead(POTANTIOMETER));
	delay(300);
}
