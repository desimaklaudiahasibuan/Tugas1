//int button[3]= {A0, A1, A2};
int led[4]={ 8, 9, 10, 11};
void setup()
{
  for( int i=0;i<4;i++)
  {
    pinMode(led[i], OUTPUT);
  }
  pinMode(A0, INPUT);
  digitalWrite(A0, HIGH);
  pinMode(A1, INPUT);
  digitalWrite(A1, HIGH);
  pinMode(A2, INPUT);
  digitalWrite(A2, HIGH);
  
}
void loop()
{
  
  if(digitalRead(A0)==LOW && digitalRead(A1)==HIGH&& digitalRead(A2)==HIGH)
  {
    for(byte count=0; count<=15; count++)
    {
    displayBinary(count);
    delay(1000);
    }
  }
  else if(digitalRead(A1)==LOW && digitalRead(A0)== HIGH && digitalRead(A2)==HIGH)
  {
     for(byte count=15 ;count>=0 ;count--)
    {
    displayBinary1(count);
    delay(1000);
    }
  }
  else if(digitalRead(A0)==LOW && digitalRead(A1)==LOW && digitalRead(A2)==LOW)
  {
    for( int i=0;i<4;i++)
    {  
    pinMode(led[i], LOW);
    }
  }
  else if(digitalRead(A2)==LOW&& digitalRead(A1)==HIGH && digitalRead(A0)==HIGH)
  {
    Serial.println("reset");
  }
  else
  {
    for( int i=0;i<4;i++)
    {
    pinMode(led[i], LOW);
    }
  }
}
  

void displayBinary(byte numToShow)
{
  for (int i=0; i<4; i++)
  {
    if (bitRead(numToShow, i) ==1)
    {
      digitalWrite(led[i], HIGH);
    }
    else
    {
      digitalWrite(led[i], LOW);
    }
  }
}
void displayBinary1(byte numToShow)
{
  for (int i=0; i<4; i++)
  {
    if (bitRead(numToShow, i) ==1)
    {
      digitalWrite(led[i], HIGH);
    }
    else
    {
      digitalWrite(led[i], LOW);
    }
  }
}

    
