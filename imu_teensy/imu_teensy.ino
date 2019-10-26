#define HWSERIAL Serial2 
#define LED 13
void setup()
{ 
  Serial.begin(19200);
  HWSERIAL.begin(38400);
  pinMode(LED, OUTPUT);
}

void loop() 
{
  HWSERIAL.write("1,0");
  Serial.println("1,0");
  digitalWrite(LED, HIGH);
  delay(2000);
  HWSERIAL.write("0,0");
  Serial.println("0,0");
  digitalWrite(LED, LOW);
  delay(2000);
}