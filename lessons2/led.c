int i;
void setup()
{
  for(i=0;i<11;i++)
  	pinMode(i, OUTPUT);
}

void loop()
{
  for(i=0;i<11;i++)
    if(i%2==0)
    	digitalWrite(i, HIGH);
    
  delay(500); 
  
  for(i=0;i<11;i++)
    if(i%2==0)
    	digitalWrite(i, LOW);
    
   delay(200); 
    
  for(i=0;i<11;i++)
    if(i%2!=0)
    	digitalWrite(i, HIGH);
    
  delay(500); 
    
  for(i=0;i<11;i++)
    if(i%2!=0)
    	digitalWrite(i, LOW);
    
  delay(200); 

}