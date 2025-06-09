#define xpulse 4
#define xdir 2
#define zpulse 32
#define zdir 33
#define ypulse 25
#define ydir 26
#define gripper 27

void setup() {
  pinMode(xpulse, OUTPUT);
  pinMode(xdir, OUTPUT);
  pinMode(ypulse, OUTPUT);
  pinMode(ydir, OUTPUT);
  pinMode(zpulse, OUTPUT);
  pinMode(zdir, OUTPUT);
  pinMode(gripper, OUTPUT);
}

void movex(int degree, int speed, int direction) {
  digitalWrite(xdir, direction);
  int pulses = degree * 28;
  int i = 0;
  for (i = 0; i < pulses; i++) {
    digitalWrite(xpulse, HIGH);
    delayMicroseconds(speed);
    digitalWrite(xpulse, LOW);
    delayMicroseconds(speed);
  }
}

void movey(int degree, int speed, int direction) {
  digitalWrite(ydir, direction);
  int pulses = degree * 28;
  int i = 0;
  for (i = 0; i < pulses; i++) {
    digitalWrite(ypulse, HIGH);
    delayMicroseconds(speed);
    digitalWrite(ypulse, LOW);
    delayMicroseconds(speed);
  }
}

void movez(int length, int speed, int direction) {
  digitalWrite(zdir, direction);
  int pulses = length * 28;
  int i = 0;
  for (i = 0; i < pulses; i++) {
    digitalWrite(zpulse, HIGH);
    delayMicroseconds(speed);
    digitalWrite(zpulse, LOW);
    delayMicroseconds(speed);
  }
}
void loop() {
  movey(90, 1000, 1);
  delayMicroseconds(100);
  digitalWrite(gripper, HIGH);
  delayMicroseconds(100);
  movez(160, 1000, 0);
  delayMicroseconds(100);
  digitalWrite(gripper, LOW);
  delayMicroseconds(100);
  movez(160, 1000, 1);
  delayMicroseconds(100);
  movey(90, 1000, 0);
  delayMicroseconds(100);
  movex(90, 1000, 1);
  delayMicroseconds(100);
  movez(160, 1000, 0);
  delayMicroseconds(100);
  digitalWrite(gripper, HIGH);
  delayMicroseconds(100);
  movez(160, 1000, 1);
  delayMicroseconds(100);
  digitalWrite(gripper, LOW);
  delayMicroseconds(100);
  movex(90, 1000, 0);
  delayMicroseconds(100);

  movey(90, 1000, 1);
  delayMicroseconds(100);
  digitalWrite(gripper, HIGH);
  delayMicroseconds(100);
  movez(160, 1000, 0);
  delayMicroseconds(100);
  digitalWrite(gripper, LOW);
  delayMicroseconds(100);
  movez(160, 1000, 1);
  delayMicroseconds(100);
  movey(90, 1000, 0);
  delayMicroseconds(100);
  movex(90, 1000, 1);
  delayMicroseconds(100);
  movez(115, 1000, 0);
  delayMicroseconds(100);
  digitalWrite(gripper, HIGH);
  delayMicroseconds(100);
  movez(115, 1000, 1);
  delayMicroseconds(100);
  digitalWrite(gripper, LOW);
  delayMicroseconds(100);
  movex(90, 1000, 0);
  delayMicroseconds(100);
}