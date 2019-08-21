#define IR1 A0
#define IR2 A1
#define IR3 A2
#define IR4 2
#define IR5 3
#define IR6 A3
#define IR7 A4
#define IR8 A5

#define in1 8
#define in2 9
#define enA 12

#define in3 10
#define in4 11
#define enB 13

const int trigPin = 4;
const int echoPin = 5;

long duration;
int distance;

int ledPin = 7;

void setup() {

  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode (in1, OUTPUT);
  pinMode (in2, OUTPUT);
  pinMode (in3, OUTPUT);
  pinMode (in4, OUTPUT);
  pinMode (enA, OUTPUT);
  pinMode (enB, OUTPUT);

  pinMode (IR1, INPUT);
  pinMode (IR2, INPUT);
  pinMode (IR3, INPUT);
  pinMode (IR4, INPUT);
  pinMode (IR5, INPUT);
  pinMode (IR6, INPUT);

  pinMode(ledPin, OUTPUT);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;
  
  int s1 = digitalRead(IR1);
  int s2 = digitalRead(IR2);
  int s3 = digitalRead(IR3);
  int s4 = digitalRead(IR4);
  int s5 = digitalRead(IR5);
  int s6 = digitalRead(IR6);
  int s7 = digitalRead(IR7);
  int s8 = digitalRead(IR8);

  Serial.print(s1);
  Serial.print(" -- ");
  Serial.print(s2);
  Serial.print(" -- ");
  Serial.print(s3);
  Serial.print(" -- ");
  Serial.print(s4);
  Serial.print(" -- ");
  Serial.print(s5);
  Serial.print(" -- ");
  Serial.print(s6);
  Serial.print(" -- ");
  Serial.print(s7);
  Serial.print(" -- ");
  Serial.print(s8);
  Serial.println("");
  Serial.println("");

  if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 0) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    stops();
  }


  else if ( (s1 == 1) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 0) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    sharpleft();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 0) && (s6 == 0) && (s7 == 0) && (s8 == 1) ) {
    sharpright();
  }


  else if ( (s1 == 1) && (s2 == 1) && (s3 == 0) && (s4 == 0) && (s5 == 0) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    sharpleft();
  }

  else if ( (s1 == 0) && (s2 == 1) && (s3 == 1) && (s4 == 0) && (s5 == 0) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    left();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 1) && (s5 == 0) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    left();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 1) && (s5 == 1) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    forward();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 1) && (s6 == 1) && (s7 == 0) && (s8 == 0) ) {
    right();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 0) && (s6 == 1) && (s7 == 1) && (s8 == 0) ) {
    right();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 0) && (s6 == 0) && (s7 == 1) && (s8 == 1) ) {
    sharpright();
  }


  else if ( (s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 0) && (s5 == 0) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    left();
  }

  else if ( (s1 == 0) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 0) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    left();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    left();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 0) && (s8 == 0) ) {
    right();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 1) && (s6 == 1) && (s7 == 1) && (s8 == 0) ) {
    right();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 0) && (s6 == 1) && (s7 == 1) && (s8 == 1) ) {
    right();
  }


  else if ( (s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 0) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    sharpleft();
  }

  else if ( (s1 == 0) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    left();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 0) && (s8 == 0) ) {
    forward();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 1) && (s8 == 0) ) {
    right();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0) && (s5 == 1) && (s6 == 1) && (s7 == 1) && (s8 == 1) ) {
    sharpright();
  }


  else if ( (s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 0) && (s7 == 0) && (s8 == 0) ) {
    sharpleft();
  }

  else if ( (s1 == 0) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 0) && (s8 == 0) ) {
    left();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 1) && (s8 == 0) ) {
    right();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 1) && (s8 == 1) ) {
    sharpright();
  }


  else if ( (s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 0) && (s8 == 0) ) {
    sharpleft();
  }

  else if ( (s1 == 0) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 1) && (s8 == 0) ) {
    forward();
  }

  else if ( (s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 1) && (s8 == 1) ) {
    sharpleft();
  }


  else if ( (s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 1) && (s8 == 0) ) {
    sharpleft();
  }

  else if ( (s1 == 0) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 1) && (s8 == 1) ) {
    sharpright();
  }


  else if ( (s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1) && (s6 == 1) && (s7 == 1) && (s8 == 1) ) {
    sharpleft();
  }

  else {
    forward();
  }
}

void forward()
{
  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  digitalWrite(ledPin, HIGH);
  Serial.println(" Moving Forward");

}
void backward()
{
  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  digitalWrite(ledPin, HIGH);
  Serial.println("Moving Backward");
}
void stops()
{
  digitalWrite(enA, LOW);
  digitalWrite(enB, LOW);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  digitalWrite(ledPin, LOW);
  Serial.println("Stop");
}
void left()
{
  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  digitalWrite(ledPin, HIGH);
  Serial.println(" Rotate Left");
}
void right()
{
  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  digitalWrite(ledPin, HIGH);
  Serial.println(" Rotate Right");
}
void sharpleft()
{
  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  digitalWrite(ledPin, HIGH);
  Serial.println(" Rotate Left");
}
void sharpright()
{
  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  digitalWrite(ledPin, HIGH);
  Serial.println(" Rotate Right");
}
