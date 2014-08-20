#define LED_PIN 13
#define BUT_PIN 2

void setup () {
	pinMode(LED_PIN, OUTPUT);
	pinMode(BUT_PIN, INPUT); //Enable pin 2 to digital input
}

void loop () {
	int but = digitalRead(BUT_PIN); //Read button state
	digitalWrite(LED_PIN, but); 	//Copy button state to LED
}