int red = D3;
int yellow = D4;
int green = D5;

void setup() {
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
    
    Particle.function("switchLEDs", switchLEDs);
}
void redLED(){
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
}

void yellowLED(){
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
}

void greenLED(){
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
}

int switchLEDs(String command){
    command.toLowerCase();
    if (command == "red"){
        redLED();
        return 1;
    }
    else if (command == "yellow"){
        yellowLED();
        return 2;
    }
    else{
        greenLED();
        return 3;
    }
}

void loop() {
    
}