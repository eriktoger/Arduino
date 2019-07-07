


void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

  pinMode(2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int switchState = digitalRead(2);

  if(switchState == LOW){
    digitalWrite (3,HIGH);
    digitalWrite (4,LOW);
    digitalWrite (5,LOW);
    
  }
  else{ // button is pressed
    digitalWrite (3,LOW);
    digitalWrite (4,LOW);
    digitalWrite (5,HIGH);

    delay(1000);
    digitalWrite (4,HIGH);
    digitalWrite (5,LOW);
    delay(2000);
  }

}
