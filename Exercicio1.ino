#define LED_PIN 13
#define BUT_PIN 2

unsigned long tempo;
int state 1;

void setup () {
	tempo = millis();
	digitalWrite(LED_PIN, state);
}

void void loop() {
	unsigned long novo = millis();
	if (novo >= tempo+1000) {
		tempo = novo;
		state = !state;
		digitalWrite(LED_PIN, state);
	}
	/*
	int but = digitalRead(BUT_PIN);
	if(but){
		digitalWrite(LED_PIN, HIGH);
		while(1);
	}
	*/
}