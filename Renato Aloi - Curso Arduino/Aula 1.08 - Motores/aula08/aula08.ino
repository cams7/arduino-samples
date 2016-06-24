#define PORTA_B 10
#define PORTA_M 8

void setup() {
    pinMode(PORTA_B, INPUT);
    digitalWrite(PORTA_B, HIGH);//Liga PullUp!

    pinMode(PORTA_M, OUTPUT);
    digitalWrite(PORTA_M, LOW);//Motor desligado
}

void loop() {
    if(digitalRead(PORTA_B) == LOW){
      digitalWrite(PORTA_M, HIGH);
    }else{
        digitalWrite(PORTA_M, LOW);
    }
}
