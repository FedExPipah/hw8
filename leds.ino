int led = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int led7 = 7;
int led8 = 6;
int led9 = 5;
int led10 = 4;
int led11 = 3;


void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
pinMode(led9,OUTPUT);
pinMode(led10,OUTPUT);
pinMode(led11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//led(red-1)
digitalWrite(led,HIGH);
delay(19);
digitalWrite(led2,HIGH);
delay(19);
digitalWrite(led3,HIGH);
delay(18);
digitalWrite(led4,HIGH);
delay(17);
digitalWrite(led5,HIGH);
delay(16);
digitalWrite(led6,HIGH);
delay(15);
digitalWrite(led7,HIGH);
delay(14);
digitalWrite(led8,HIGH);
delay(13);
digitalWrite(led9,HIGH);
delay(12);
digitalWrite(led10,HIGH);
delay(11);
digitalWrite(led11,HIGH);
delay(10);

//
digitalWrite(led,LOW);
delay(19);
digitalWrite(led2,LOW);
delay(19);
digitalWrite(led3,LOW);
delay(18);
digitalWrite(led4,LOW);
delay(17);
digitalWrite(led5,LOW);
delay(16);
digitalWrite(led6,LOW);
delay(15);
digitalWrite(led7,LOW);
delay(14);
digitalWrite(led8,LOW);
delay(13);
digitalWrite(led9,LOW);
delay(12);
digitalWrite(led10,LOW);
delay(11);
digitalWrite(led11,LOW);
delay(10);

//
digitalWrite(led11,HIGH);
delay(10);
digitalWrite(led10,HIGH);
delay(11);
digitalWrite(led9,HIGH);
delay(12);
digitalWrite(led8,HIGH);
delay(13);
digitalWrite(led7,HIGH);
delay(14);
digitalWrite(led6,HIGH);
delay(15);
digitalWrite(led5,HIGH);
delay(16);
digitalWrite(led4,HIGH);
delay(17);
delay(18);
digitalWrite(led4,HIGH);
digitalWrite(led2,HIGH);
delay(19);
digitalWrite(led,HIGH);
delay(19);
//
digitalWrite(led11,LOW);
delay(10);
digitalWrite(led10,LOW);
delay(11);
digitalWrite(led9,LOW);
delay(12);
digitalWrite(led8,LOW);
delay(13);
digitalWrite(led7,LOW);
delay(14);
digitalWrite(led6,LOW);
delay(15);
digitalWrite(led5,LOW);
delay(16);
digitalWrite(led4,LOW);
delay(17);
digitalWrite(led3,LOW);
delay(18);
digitalWrite(led2,LOW);
delay(19);
digitalWrite(led,LOW);
delay(19);

}
