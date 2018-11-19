#include <Servo.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX
Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
  Serial.println("Goodnight moon!");
  mySerial.begin(4800);
  mySerial.println("Hello, world?");
}

void loop() {
  if (mySerial.available()) {
    val = Serial.write(mySerial.read());
    Serial.print("Original Val = ");
    Serial.println(val);
    val = constrain(val, 20, 160);
    Serial.print("  Constrain Val = ");
    Serial.println(val);
    myservo.write(val);                  // sets the servo position according to the scaled value
    delay(15);                           // waits for the servo to get there
  }
}
