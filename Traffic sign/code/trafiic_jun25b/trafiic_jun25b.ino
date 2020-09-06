
int red_led=12;
int yellow_led=11;
int green_led=10;

void setup() {
  // put your setup code here, to run once:

pinMode(red_led,OUTPUT);
pinMode(yellow_led,OUTPUT);
pinMode(green_led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(red_led,LOW);
digitalWrite(yellow_led,LOW);
digitalWrite(green_led,LOW);
delay(100);
digitalWrite(red_led,HIGH);
delay(1000);
digitalWrite(red_led,LOW);
delay(1000);
digitalWrite(yellow_led,HIGH);
delay(1000);
digitalWrite(yellow_led,LOW);
delay(1000);
digitalWrite(green_led,HIGH);
delay(1000);
digitalWrite(green_led,LOW);
delay(1000);


}
