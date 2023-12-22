int h = 4; //high indication
int l = 3; //low indication
int up = 0;//up value
 int down = 0; //down value
 int motor1input1 = 9;
 int motor1input2 = 10;
 int blin = 13;  // led pin
 void setup() {
 pinMode(h, INPUT);
 pinMode(l, INPUT);
pinMode(motor1input1, OUTPUT);
 pinMode(motor1input2, OUTPUT);
 pinMode(blin, OUTPUT);
 digitalWrite(motor1input1,HIGH);
 digitalWrite(motor1input2,HIGH);
 }
 void loop() {
 up = digitalRead(h); //initialization
 down = digitalRead(l);
 if(down == LOW && up == LOW){
 digitalWrite(blin, HIGH);
 }
else if(down == HIGH && up == LOW){
 digitalWrite(blin, HIGH);
 }
 else {
 digitalWrite(blin, LOW);
 digitalWrite(motor1input1, LOW);
 delay(10);
 digitalWrite(motor1input1, HIGH);
 }
 }
