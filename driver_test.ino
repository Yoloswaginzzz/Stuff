const int stepPin = 6; 
const int dirPin = 7; 
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode (11,INPUT);
  pinMode (12,INPUT);
}
void loop() {
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite (10, HIGH);
  digitalWrite (11, HIGH);
  digitalWrite (12, HIGH);
  if ( digitalRead (11) == LOW) {
    
  digitalWrite(dirPin,LOW); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  //for(int x = 0; x < 3200; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
    //}
  }
   
  
  //delay(1000); // One second delay
  if (digitalRead (12) == LOW) {
  
  digitalWrite(dirPin,HIGH); //Changes the rotations direction
  // Makes 400 pulses for making two full cycle rotation
//  for(int x = 0; x < 3200; x++) {
    digitalWrite(stepPin,HIGH);
   delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
   delayMicroseconds(500);
  //  }
  }
   
  
 // delay(1000);
}
