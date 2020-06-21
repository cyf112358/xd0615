char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.println("ok!");
}

/*
'w':前进
's':后退
'd':右转
'a':左转
'e':停止
*/
void loop()
{
  if(Serial.available()>0)
  {
  	ch=Serial.read();
    switch(ch)
    {
    case 'w':
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      break;
    case 's':
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(4,LOW);
      break;
    case 'd':
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      break;
    case 'a':
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(4,LOW);
      break;
    case 'e':
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      break;
    default:
      break;
    }
  }
}
