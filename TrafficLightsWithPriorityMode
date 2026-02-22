int ledV = 13;
int ledA = 12;
int ledR = 11;

int botonP = 2;

int modo = 0;

int estadoBoton;
int ultimoEstadoBoton = HIGH;

long tiempoRebote = 0;
long delayRebote = 100;

long tiempoAnterior = 0;
long intervalo = 300;

int pasoSemaforo = 0;
bool estadoParpadeo = false;

void setup() {
	pinMode(ledV, OUTPUT);
	pinMode(ledA, OUTPUT);
	pinMode(ledR, OUTPUT);
	pinMode(botonP, INPUT_PULLUP);
}

void loop() {
    int lectura = digitalRead(botonP);
    if (lectura == LOW && ultimoEstadoBoton == HIGH && (millis() - tiempoRebote) > delayRebote) {
    	modo++;
    	if (modo > 4) modo = 0;
    	tiempoRebote = millis();
    	pasoSemaforo = 0;
    	tiempoAnterior = millis();
    	estadoParpadeo = false;
	}
  	ultimoEstadoBoton = lectura;
  	long tiempoActual = millis();
  	switch (modo) {
    case 0:
    case 5:
      	if (tiempoActual - tiempoAnterior >= 1000) {
        	tiempoAnterior = tiempoActual;
        	pasoSemaforo++;
        	if (pasoSemaforo > 3) pasoSemaforo = 0;
      	}
      	if (pasoSemaforo == 0) {
        	digitalWrite(ledV, HIGH);
        	digitalWrite(ledA, LOW);
        	digitalWrite(ledR, LOW);
      	}
      	if (pasoSemaforo == 1 || pasoSemaforo == 3) {
        	digitalWrite(ledV, LOW);
			digitalWrite(ledA, HIGH);
			digitalWrite(ledR, LOW);
      	}
      	if (pasoSemaforo == 2) {
        	digitalWrite(ledV, LOW);
        	digitalWrite(ledA, LOW);
        	digitalWrite(ledR, HIGH);
      	}
      	break;
    case 1:
    	caseOne();
    	break;
    case 2:
    	if (tiempoActual - tiempoAnterior >= intervalo) {
        	tiempoAnterior = tiempoActual;
        	estadoParpadeo = !estadoParpadeo;
        	digitalWrite(ledV, estadoParpadeo);
        	digitalWrite(ledA, estadoParpadeo);
        	digitalWrite(ledR, estadoParpadeo);
      	}
      	break;
    case 3:
      	if (tiempoActual - tiempoAnterior >= intervalo) {
        	tiempoAnterior = tiempoActual;
        	estadoParpadeo = !estadoParpadeo;
        	digitalWrite(ledV, LOW);
        	digitalWrite(ledA, estadoParpadeo);
        	digitalWrite(ledR, LOW);
      	}
      	break;
    case 4:
    	caseFour();
      	break;
  }
}

void caseOne() {
	digitalWrite(ledV, HIGH);
	digitalWrite(ledA, LOW);
	digitalWrite(ledR, LOW);
}

void caseFour() {
  	digitalWrite(ledV, LOW);
    digitalWrite(ledA, LOW);
    digitalWrite(ledR, LOW);
}