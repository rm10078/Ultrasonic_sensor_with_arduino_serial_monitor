/*
My github profile link:-https://github.com/rm10078
You can use this code for your any project.
*/

const int echo = 10;  //arduino 9 number pin connected with echo pin
const int trig =9;   //arduino 10 number pin connected with trig pin

float dur=0;    // for store data
float dis=0;



void setup(){
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.begin(9600);     //my serial monitor baud rate 9600
  }

void loop(){
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);

dur = pulseIn(echo,HIGH);
dis =dur*0.034/2;

Serial.print("Distance = ");
Serial.println(dis);
  }
