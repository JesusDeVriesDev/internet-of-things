// C++ code
//
int ledV = 13;
int ledA = 12;
int ledR = 11;

void setup(){
	pinMode(ledV, OUTPUT);
	pinMode(ledA, OUTPUT);
	pinMode(ledR, OUTPUT);
}

void loop(){
	digitalWrite(ledV, HIGH);
    digitalWrite(ledA, LOW);
	digitalWrite(ledR, LOW);
    yellowLight();
	digitalWrite(ledV, LOW);
	digitalWrite(ledA, LOW);
	digitalWrite(ledR, HIGH);
	yellowLight();
}

void yellowLight() {
  	delay(1000);
    digitalWrite(ledV, LOW);
	digitalWrite(ledA, HIGH);
	digitalWrite(ledR, LOW);
    delay(1000);
}