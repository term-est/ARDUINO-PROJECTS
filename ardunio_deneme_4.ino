#define POTANTIOMETER A0


void setup() 
{
	Serial.begin(9600);
	analogReadResolution(10);
	analogReference(DEFAULT);	
	Serial.println("Potansiyometre deger okuma"); 
}

void loop()
{
	Serial.println(5.00 / 1024.00 * analogRead(POTANTIOMETER));
	delay(300);
}
