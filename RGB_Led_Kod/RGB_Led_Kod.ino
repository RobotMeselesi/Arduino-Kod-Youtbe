#define kirmizi 11
#define mavi 10
#define yesil 9
#define buton 8

void setup() {
  pinMode(buton,INPUT);
  pinMode(kirmizi, OUTPUT); // put your setup code here, to run once:
  pinMode(mavi, OUTPUT);
  pinMode(yesil, OUTPUT);
}

void loop() {
 int buton_durumu = digitalRead(buton);

  if (buton_durumu == 1){
    digitalWrite(kirmizi, 0);
  digitalWrite(mavi, 0);
  digitalWrite(yesil, 200);
  delay(1000);
  digitalWrite(kirmizi, 0);
  digitalWrite(mavi, 200);
  digitalWrite(yesil, 0);
  delay(1000);
  digitalWrite(kirmizi, 200);
  digitalWrite(mavi, 0);
  digitalWrite(yesil, 0);
  delay(1000);
 
 
  }


  else{
   digitalWrite(kirmizi, HIGH);
  digitalWrite(mavi, HIGH);
  digitalWrite(yesil, HIGH);
}
}
