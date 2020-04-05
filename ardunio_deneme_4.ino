#define POTANTIOMETER 	A0
#define RESOLUTION_COEF 5.00 / 1024.00


void setup() 
{
	Serial.begin(9600);
	Serial.println("Potansiyometre deger okuma"); 
}

void loop()
{
	Serial.println(RESOLUTION_COEF * analogRead(POTANTIOMETER));
	delay(300);
}
