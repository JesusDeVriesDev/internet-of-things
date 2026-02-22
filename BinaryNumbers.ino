int leds[5] = {13, 12, 11, 10, 9};

void setup() {
    for(int i = 0; i < 5; i++){
        pinMode(leds[i], OUTPUT);   
    }
}

void loop() {
    for(int i = 0; i <= 20; i++) {
        for(int b = 0; b < 5; b++){
            int e = bitRead(i, b);
            digitalWrite(leds[b], e);
        }
    delay(1000);
    }
}