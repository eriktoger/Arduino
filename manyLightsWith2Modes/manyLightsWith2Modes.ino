
int NROFLAMPS = 8;
int STARTLAMP = 3;
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

  pinMode(2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int switchState = digitalRead(2); 
  int lamp = STARTLAMP; 
 
  if(switchState == LOW){
    
    lamp = (counter % NROFLAMPS) + STARTLAMP;
    digitalWrite (lamp,HIGH);
    counter++;   
  }
  else{ // button is pressed
    lamp = rand() % NROFLAMPS + STARTLAMP;
    digitalWrite (lamp,HIGH);
  }
  
  delay(500);
  digitalWrite (lamp,LOW); // turn off the lamp again

}
