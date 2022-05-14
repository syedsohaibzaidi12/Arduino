#include <NewPing.h>
#define TRIGGER_PIN 10
#define ECHO_PIN 11
#define MAX_DISTANCE 20

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup() {
  // put your setup code here, to run once:
  //pinMode(pir, INPUT);
  //pinMode(led , OUTPUT);
  Serial.begin(9600);
  delay(50);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Distance is: ");
  Serial.println(sonar.ping_cm());
  delay(500);

}
