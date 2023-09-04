char data;
int ledpin=13;

void setup()
{
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);

}
void loop()
{
  if (Serial.available())
  {
    data=Serial.read();
    Serial.print(data);

  }
  if (data=='0')
  digitalWrite(ledpin,HIGH);
  else if(data=='1')
  digitalWrite(ledpin,LOW);
  delay(100);
}