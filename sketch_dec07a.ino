const int out1=5;
const int out2=4;
const int out3=3;
const int out4=2;
#define nyala HIGH
#define mati LOW
int incomingByte=0;

void setup() {
  Serial.begin(9600);
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);
  }

void loop() {
  if(Serial.available()>0)
  {
    incomingByte=Serial.read();
    if(incomingByte=='1')
    {
      digitalWrite(out1, nyala);
      delay(10);
    }
    if(incomingByte=='A')
    {
      digitalWrite(out1, mati);
      delay(10);
    }
    if(incomingByte=='2')
    {
      digitalWrite(out2, nyala);
      delay(10);
    }
    if(incomingByte=='B')
    {
      digitalWrite(out2, mati);
      delay(10);
    }
    if(incomingByte=="3")
    {
      digitalWrite(out3, nyala);
      delay(10);
    }
    if(incomingByte=='C')
    {
      digitalWrite(out3, mati);
      delay(10);
    }
    if(incomingByte=='4')
    {
      digitalWrite(out4, nyala);
      delay(10);
    }
    if(incomingByte=='D')
    {
      digitalWrite(out4, mati);
      delay(10);
    }
    if(incomingByte=='9')
    {
      nyalaSemua();
    }
    if(incomingByte=='H')
    {
      matiSemua();
    }
  }  
}

void nyalaSemua(){
  digitalWrite(out1,nyala);
  delay(10);
  digitalWrite(out2,nyala);
  delay(10);
  digitalWrite(out3,nyala);
  delay(10);
  digitalWrite(out4,nyala);
  delay(10);
}

void matiSemua()
{
  digitalWrite(out1, mati);
  delay(10);
  digitalWrite(out2, mati);
  delay(10);
  digitalWrite(out3, mati);
  delay(10);
  digitalWrite(out4, mati);
  delay(10);
}

      
      
 
 
