float Crnt = A0; //input analog pin
float relay = 8; //output analog pin
float voltage;
float adcValue=0;
float amps;

void setup() {
  Serial.begin(9600);
  pinMode(Crnt,INPUT);
pinMode(relay,OUTPUT);
analogWrite(relay,HIGH);
}

void loop() {
digitalWrite(relay,LOW);
adcValue = analogRead(A0);
Serial.println("adcvalue");
Serial.println(adcValue);

voltage=(adcValue*5)/1023;
 Serial.print("volt : ");
 Serial.println(voltage);
 amps=(voltage-2.500)/(0.1);
  Serial.print("amps : ");
 Serial.println(amps);
 
  amps=amps*-1;
  if(amps > 1.1|| amps < 0.24)  Smartness condition
  digitalWrite(relay,HIGH)
  else
  digitalWrite(relay,LOW)
  Serial.print("amps : ");
 Serial.println(amps);
}


