#define LED_PIN 13

void setup () {
	pinMode(LED_PIN, OUTPUT); //Enable pin 13 for digital output
}

void loop () {
	digitalWrite(LED_PIN, HIGH); //Turn on the LED
	delay(1000);				//Wait one second
	digitalWrite(LED_PIN, LOW); //Turn off LED
	delay(1000);				//Wait one second
}