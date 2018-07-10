const int enable1 = 9;
const int forward1 = 8;
const int backwards1 = 7;
const int enable2 = 10;
const int forward2 = 12;
const int backwards2 = 11;

void setup() {
  pinMode(forward1, OUTPUT); // Blue led represents the robot moving forwards.
  pinMode(backwards1, OUTPUT); // Yellow led represents the robot moving backwards.
  pinMode(enable1, OUTPUT); // Red led represents the robot turning on.
  pinMode(forward2, OUTPUT); // Blue led represents the robot moving forwards.
  pinMode(enable2, OUTPUT); // Red led` represents the robot turning on.
  pinMode(backwards2, OUTPUT); // Yellow led represents the robot moving backwards.
  lightmeup();
}
  // put your setup code here, to run once:


void loop() {

}

void lightmeup() {
  digitalWrite(forward1, HIGH);
  digitalWrite(forward2, HIGH);
  digitalWrite(enable1, HIGH);
  digitalWrite(enable2, HIGH);
  delay(10000);
  digitalWrite(forward1, LOW);
  digitalWrite(forward2, LOW);
  digitalWrite(enable1, LOW);
  digitalWrite(enable2, LOW);
  exit(0);
}


