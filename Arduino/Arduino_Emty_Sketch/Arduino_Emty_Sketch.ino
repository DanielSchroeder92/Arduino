Pin1 =1,


void setup() {
Serial.begin(9600);
pinMode(Pin1,INPUT);
}

void loop() {
 digitalWrite(Pin1,HIGH);
}
