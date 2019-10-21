void setup()
{
  pinMode(12, OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(2,INPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
  
}

void loop()
{int x=digitalRead(2);
 int y=digitalRead(4);
 Serial.println(x);
  if((x==1&&y==0)||(x==0&&y==1))
    {digitalWrite(12,HIGH);
     digitalWrite(9,LOW);
    }
   else if(x==1 && y==1)
     {digitalWrite(9,HIGH);
      digitalWrite(12,LOW);
     }
   else 
    { digitalWrite(9,LOW);
     digitalWrite(12,LOW);}
}
