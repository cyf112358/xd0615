#include <MsTimer2.h>  
#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6

#define BT 6
#define LT 7
#define S1 11

int tick = 0; //计数值
byte count = 0;

void onTimer()
{
  Light(tick);  //调用七段显示程序
  tick++;
  if(tick==10)
    tick=0;
}

int pinInterrupt = 2; //接中断信号的脚

void onChange()
{

  Serial.println("OK");
  tick=0;
}
 
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6,OUTPUT); 
  pinMode(7,OUTPUT);  
  pinMode(8, OUTPUT); 
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);  
  digitalWrite(11,HIGH);
  

  
  Serial.begin(9600); 
  pinMode( pinInterrupt, INPUT);
  
  MsTimer2::set(1000, onTimer); 
  MsTimer2::start(); 
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), onChange, CHANGE);
  
}
 
void Light(int tick)
{
  count=tick;
  count=count-'0';
  digitalWrite(S1,LOW);
  digitalWrite(IN1,count&0x1);
  digitalWrite(IN2,(count>>1)&0x1);
  digitalWrite(IN3,(count>>2)&0x1);
  digitalWrite(IN4,(count>>3)&0x1);
  digitalWrite(S1,HIGH);  

}

void loop()
{
}

