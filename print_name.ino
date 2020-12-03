int led = 13;
bool a;
bool state = false;
bool b;


void setup() {
  // put your setup code here, to run once;
pinMode(led,OUTPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);
Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
a=digitalRead(2);
b=digitalRead(3);
if (digitalRead(2)) {
  state=true;
  Serial.println("light is on");
}
if(digitalRead(3)){
  state=true;
}
}
