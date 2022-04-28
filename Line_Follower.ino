 void forward(){
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);     
   }
void skidright(){
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);  
  }
void skidleft(){
    digitalWrite(8,HIGH);//left wheel
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);//right wheel
    digitalWrite(11,LOW);  
}
void reverse(){
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);  
  }
void pause(){
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);  
  }  
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr0=analogRead(A0);
  int ldr1=analogRead(A1);
  Serial.println(ldr0);
  Serial.println(ldr1);
  if(ldr0>500 && ldr1>500)                //Forward
  { 
   forward();
  }
  else if(ldr0>500 && ldr1<500)                   // left
  {
    skidleft();
    delay(500);
    forward();
  }
   else if(ldr0<500 && ldr1>500)                   //right
  {
    skidright();
    delay(500);
    forward();
  }
   else if(ldr0<500 && ldr1<500)                //For back obstacle
  {
    reverse();
    delay(500);
    if(ldr0>500 && ldr1<500)
    {
      skidleft();
      delay(500);
      forward();
      }
    else if(ldr0<800 && ldr1>800)
    {
      skidright();
      delay(500);
      forward();
      }     
  }
}

     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
  
  
 

    
  
  
  
