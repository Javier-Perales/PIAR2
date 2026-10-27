const int ROJO = 8;
const int AMARILLO = 9;
const int VERDE = 10;

void setup() {
    pinMode(ROJO, OUTPUT);
    pinMode(AMARILLO, OUTPUT);
    pinMode(VERDE, OUTPUT);
}

void loop() {
    // Verde durante 3 segundos
    digitalWrite(VERDE, HIGH);
    delay(3000);
    digitalWrite(VERDE, LOW);

    // Amarillo: 3 parpadeos
    for (int i = 0; i < 3; i++) {
        digitalWrite(AMARILLO, HIGH);
        delay(300);
        digitalWrite(AMARILLO, LOW);
        delay(300);
    }

    // Rojo durante 3 segundos
    digitalWrite(ROJO, HIGH);
    delay(3000);
    digitalWrite(ROJO, LOW);
}
