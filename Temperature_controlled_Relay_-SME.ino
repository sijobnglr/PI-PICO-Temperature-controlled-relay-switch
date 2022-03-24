

int reading = 0;

int relay =25;
void setup() 
{
  
  Serial.begin(115200);
  pinMode(relay,OUTPUT);
  delay(5000);
}

void loop() {
 
Serial.printf("Core temperature: %2.1fC\n", analogReadTemp());
  
  if (("Core temperature: %2.1fC\n", analogReadTemp()) >31)

  {
    digitalWrite(25,HIGH);
    Serial.println("Fan is ON");
  }
  else
  
  {digitalWrite(25,LOW);
  Serial.println("Fan is oFF");
  }
  delay(2000);

  
}
