#define buton 10
#define led 8

int buton_durumu = 0;
void setup() {
pinMode(buton,INPUT);
pinMode(led,OUTPUT);// put your setup code here, to run once:

}

void loop() {
 buton_durumu = digitalRead(buton); // put your main code here, to run repeatedly:

if (buton_durumu == 1){
 digitalWrite(led,HIGH);

}
 else {
 digitalWrite(led,LOW); 
}
}
