#include <Arduino.h>
int led1 = 23;
int led2 = 19;
int led3 = 18;
int led4 = 5;
int led5 = 17;
int led6 = 16;
int led7 = 4;
int led8 = 0;
int potPin = 36;
void setup(){
    pinMode (led1,OUTPUT);
    pinMode (led2,OUTPUT);
    pinMode (led3,OUTPUT);
    pinMode (led4,OUTPUT);
    pinMode (led5,OUTPUT);
    pinMode (led6,OUTPUT);
    pinMode (led7,OUTPUT);
    pinMode (led8,OUTPUT);
}
void loop() {
    int potValue = analogRead(potPin); // อ่านค่าจาก potentiometer
    int range = map(potValue, 0, 4095, 0, 4000); // แปลงค่าจาก potentiometer เป็นช่วง 0-4000

    // ปิดไฟทั้งหมดก่อน
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);

    // เปิดไฟตามค่า range
    if (range >= 0 && range < 500) {
        digitalWrite(led1, HIGH);
    }
    else if (range >= 500 && range < 1000) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
    }
    else if (range >= 1000 && range < 1500) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
    }
    else if (range >= 1500 && range < 2000) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
    }
    else if (range >= 2000 && range < 2500) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
    }
    else if (range >= 2500 && range < 3000) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, HIGH);
    }
    else if (range >= 3000 && range < 3500) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led7, HIGH);
    }
    else if (range >= 3500 && range <= 4000) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led7, HIGH);
        digitalWrite(led8, HIGH);
    }

    delay(10); // ปรับความเร็วในการเปลี่ยนแปลง
}