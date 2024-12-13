#include <Arduino.h>

// Define pin numbers for LEDs

//LED SET 1
const int RED_LED1 = 23;
const int YELLOW_LED1 = 19;
const int GREEN_LED1 = 18;

// LED SET 2
const int RED_LED2 = 5;
const int YELLOW_LED2 = 17;
const int GREEN_LED2 = 16;

// Define timing variables in milliseconds
const unsigned long RED_TIME = 10000;    // Red light duration
const unsigned long YELLOW_TIME = 3000; // Yellow light duration
const unsigned long GREEN_TIME = 10000;  // Green light duration
int myFunction(int, int);

void setup() {
// Set LED pins as outputs
    pinMode (RED_LED1, OUTPUT);
    pinMode (YELLOW_LED1, OUTPUT);
    pinMode (GREEN_LED1, OUTPUT);
    
    pinMode (RED_LED2, OUTPUT);
    pinMode (YELLOW_LED2, OUTPUT);
    pinMode (GREEN_LED2, OUTPUT);
  int result = myFunction(2, 3);
}

void loop() {
 // Red light phase
    digitalWrite(RED_LED1, HIGH);
    digitalWrite(GREEN_LED2, HIGH);
    delay(RED_TIME);
    digitalWrite(RED_LED1, LOW);
    digitalWrite(GREEN_LED2, LOW); 
    
    // Yellow light phase
    digitalWrite(YELLOW_LED2, HIGH);
    delay(YELLOW_TIME);
    digitalWrite(YELLOW_LED2, LOW);

    // Green light phase
    digitalWrite(GREEN_LED1, HIGH);
    digitalWrite(RED_LED2, HIGH);
    delay(GREEN_TIME);
    digitalWrite(GREEN_LED1, LOW);
    digitalWrite(RED_LED2, LOW);


    digitalWrite(YELLOW_LED1, HIGH);
    delay(YELLOW_TIME);
    digitalWrite(YELLOW_LED1, LOW);
    // Green light phase
    digitalWrite(GREEN_LED2, HIGH);
    delay(GREEN_TIME);
    digitalWrite(GREEN_LED2, LOW);   

    // Yellow light phase
    digitalWrite(YELLOW_LED2, HIGH);
    delay(YELLOW_TIME);
    digitalWrite(YELLOW_LED2, LOW); 

    // Red light phase
    digitalWrite(RED_LED2, HIGH);
    delay(RED_TIME);
    digitalWrite(RED_LED2, LOW);
 }
// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}