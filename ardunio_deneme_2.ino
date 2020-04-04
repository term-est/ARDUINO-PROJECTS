#define BUTTON	8
#define LED	10

void setup()
{
	pinMode(BUTTON, INPUT);
	pinMode(LED, OUTPUT);
}

void loop()
{
	digitalWrite(LED, digitalRead(BUTTON));
}


