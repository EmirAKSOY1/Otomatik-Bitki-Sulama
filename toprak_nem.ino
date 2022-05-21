int ledk=3;
int ledy=4;
int motor1=9;
int motor2=10;
int sensor=A0;
  int sinir=600;
  int deger=0;
void setup() {
  Serial.begin(9600);
  pinMode(ledk,OUTPUT);
  pinMode(ledy,OUTPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(sensor,INPUT);
}

void loop() {
  deger=analogRead(sensor);
  Serial.println(deger);
  if(deger>sinir){
    Serial.println("motor Çalıştı");
    digitalWrite(ledk,HIGH);
    digitalWrite(ledy,LOW);
    digitalWrite(motor1,HIGH);
    digitalWrite(motor2,LOW);
    delay(3000);
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
    delay(5000);
    
  }else{
    Serial.println("Motor Durdu Çiçek Mutlu");
    digitalWrite(ledy,HIGH);
    digitalWrite(ledk,LOW);
    digitalWrite(motor2,LOW);
    digitalWrite(motor1,LOW);
  }

}
