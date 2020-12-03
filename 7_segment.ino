char a;
void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);//a
pinMode(11,OUTPUT);//b
pinMode(10,OUTPUT);//c
pinMode(9,OUTPUT);//d
pinMode(8,OUTPUT);//e
pinMode(7,OUTPUT);//f
pinMode(6,OUTPUT);//g
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
  a=Serial.read();
}
if(a=='0'){
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(6,LOW);
 Serial.println(a);
}
else if(a=='1'){
 digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(8,LOW);
 digitalWrite(7,LOW);
 digitalWrite(6,LOW);
 Serial.println(a);
  }
else if(a=='2'){
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,LOW);
 digitalWrite(9,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(6,HIGH);
 Serial.println(a);
}
else if(a=='3'){
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(8,LOW);
 digitalWrite(7,LOW);
 digitalWrite(6,HIGH);
 Serial.println(a);
}
else if(a=='4'){
 digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(8,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(6,HIGH);
 Serial.println(a);
}
else if(a=='5'){
 digitalWrite(12,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(8,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(6,HIGH);
 Serial.println(a);
}
else if(a=='6'){
 digitalWrite(12,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(6,HIGH);
 Serial.println(a);
}
else if(a=='7'){
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,LOW);
 digitalWrite(8,LOW);
 digitalWrite(7,LOW);
 digitalWrite(6,LOW);
 Serial.println(a);
}
else if(a=='8'){
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(6,HIGH);
 Serial.println(a);
}
else if(a=='9'){
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(8,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(6,HIGH);
 Serial.println(a);
}
else {
  Serial.println("non-valid integer");
}
delay(500);
}
