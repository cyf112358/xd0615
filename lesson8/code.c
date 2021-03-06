int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT); //将引脚A0设置为输入端口，外部引脚接+5V和接地。
  Serial.begin(9600);

}

void loop()
{
  sensorValue = analogRead(A0);
/*
analogRead()是读取arduino模拟端口数据的函数，
读取到的数据范围是0到1023对应端口上0到5V的电压范围,
也就是当端口输入电压为 n V的时候，
读取的值就是n/5*1023
*/
  Serial.println(sensorValue);//将读取到的数值打在串行监视器上
  delay(10); //间隔为10ms
}
