#define echo 12
#define trig 13
#define kirmizi 8
#define sari 9
#define yesil 10
#define buzzer 11



void setup() {
 pinMode(13,OUTPUT);
 pinMode(12,INPUT);
 pinMode(11,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);// put your setup code here, to run once:

 
}

void loop() {
  digitalWrite(trig,HIGH);// put your main code here, to run repeatedly:
  delayMicroseconds(2);
  digitalWrite(trig,LOW);

  float zaman = pulseIn(echo,HIGH);
  float cm = zaman/58.2;

  Serial.println(cm);
  delay(200);

  if (cm <= 15 && cm > 10){
    digitalWrite(yesil,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(300);
    digitalWrite(yesil,LOW);
    digitalWrite(buzzer,LOW);
    delay(300);
  }

  else if (cm <= 10 && cm > 5){
  digitalWrite(sari,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(200);
  digitalWrite(sari,LOW);
  digitalWrite(buzzer,LOW);
  delay(200);
  }
 else if (cm <= 5){
    digitalWrite(kirmizi,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(kirmizi,LOW);
    digitalWrite(buzzer,LOW);
    delay(100);
  }
}
