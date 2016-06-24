/*
 * Hello World!
 *
 * This is the Hello World! for Arduino. 
 * It shows how to send data to the computer
 */

#define BAUD_RATE_PER_SECOND 9600 // 9600 bps
#define DELAY_MS             500 // 1/2 second
#define LED_PORTA            13   // LED da porta 13 do Arduino 

bool led_aceso = true;


void setup()                    // run once, when the sketch starts
{
  Serial.begin(BAUD_RATE_PER_SECOND);           // set up Serial library at 9600 bps
  pinMode(LED_PORTA, OUTPUT);
}

void loop()                       // run over and over again
{
  if(led_aceso){
     digitalWrite(LED_PORTA, HIGH);
     Serial.println("O LED da porta 13 esta aceso!");
  }else{
     digitalWrite(LED_PORTA, LOW);  
     Serial.println("O LED da porta 13 esta apagado!");
  }
  delay(DELAY_MS);
  led_aceso = !led_aceso;
}

 
