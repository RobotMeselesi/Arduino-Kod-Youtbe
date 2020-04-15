#define buton 11
#define kirmizioto 10
#define  sarioto 9
#define  yesiloto 8
#define  kirmiziyaya 7
#define  yesilyaya 6

void setup() {
 pinMode(kirmizioto, OUTPUT); 
 pinMode(sarioto, OUTPUT);
 pinMode(yesiloto, OUTPUT);
 pinMode(kirmiziyaya, OUTPUT);
 pinMode(yesilyaya, OUTPUT);// put your setup code here, to run once:
pinMode(buton,INPUT);
}
void loop() {
int buton_durumu = digitalRead(buton);
  if (buton_durumu == 1){
     delay(2000);
 digitalWrite(10, LOW);
 digitalWrite(9, HIGH);
 digitalWrite(8, LOW);
 digitalWrite(7, HIGH);
 digitalWrite(6, LOW);
 delay(2000);
 digitalWrite(10, HIGH);
 digitalWrite(9, LOW);
 digitalWrite(8, LOW);
 digitalWrite(7, LOW);
 digitalWrite(6, HIGH);
 delay(3000);
  }
  else{
    digitalWrite(10, LOW);
 digitalWrite(9, LOW);
 digitalWrite(8, HIGH);
 digitalWrite(7, HIGH);// put your main code here, to run repeatedly:
 digitalWrite(6,  LOW);
    
    
    }
  }
  
