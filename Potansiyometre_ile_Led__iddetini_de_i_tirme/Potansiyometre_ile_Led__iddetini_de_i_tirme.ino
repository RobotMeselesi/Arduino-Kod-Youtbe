#define potan A0 
#define led 3

int deger = 0;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
deger = analogRead(potan);
deger = deger / 4;
analogWrite(led,deger);// put your main code here, to run repeatedly:

}
