
void setup()
{
	pinMode(8, OUTPUT);
}

void loop()
{
	static byte i = 0;

	digitalWrite(8, ++i & B1);
	delay(500);
}