


int leftInput1=A0;  //analog input from the sensor to arduino
int leftInput2=A1;
int rightInput1=A2;
int rightInput2=A3;
int leftMotor= 9;    // pin 6 and 5 are capable of generating the PMW
int rightMotor= 10;
int leftValue1 = 0;
int rightValue1 = 0;
int leftValue2 = 0;
int rightValue2 = 0;
void setup() 
  // put your setup code here, to run once:
  {
  pinMode (leftMotor, OUTPUT);  // output is the vale assign to left motor
  pinMode (rightMotor, OUTPUT);  // output is the value assign to Right motor
}



void loop() 
  // put your main code here, to run repeatedly:

{
  leftValue1 = digitalRead (leftInput1);  // digital data from the input sensor is taken 
 
  rightValue1= digitalRead (rightInput1); // there are all together four sensor two  at the left most and two at the rigtmost
  leftValue2 = digitalRead (leftInput2);
  rightValue2= digitalRead (rightInput2);

 if
   ( leftValue1 == HIGH && leftValue2 == HIGH && rightValue1== HIGH && rightValue2 == HIGH)
   {
     digitalWrite (leftMotor, HIGH);   // Both motor moves forward with high speed
     digitalWrite (rightMotor, LOW);
   }
   else
   

     if
     ( leftValue1 == HIGH && leftValue2 == LOW && rightValue1== LOW && rightValue2== LOW)
    {
   analogWrite (leftMotor, 4*51);  //The left motor moves with slightly slow speed while right motor moves  with slower speed
   analogWrite (rightMotor,3*51);  //The  robot moves turns toward the right
    }
 else
   if ( leftValue1 == HIGH && leftValue2 == HIGH && rightValue1== LOW && rightValue2== LOW)
   {
   analogWrite (leftMotor,4*51 );  //The left motor moves with slightly slow speed while right motor moves  with slower speed
   analogWrite (rightMotor, 2*51);  //The  robot moves turns toward the right
   }
    else 
   if ( leftValue1 == HIGH && leftValue2 == HIGH && rightValue1== HIGH && rightValue2== LOW)
   {
   analogWrite (leftMotor,4*51 );  //The left motor moves with slightly slow speed while right motor moves  with slower speed
   analogWrite (rightMotor,1*51);  //The  robot moves turns toward the right
   }
   else
   
     if ( leftValue1 == LOW && leftValue2 == LOW && rightValue1== LOW && rightValue2== HIGH)
     {
     analogWrite (leftMotor, 3*51);  //The left motor moves with slightly slow speed while right motor moves  with slower speed
   analogWrite (rightMotor,4*51);
     }
     else
     if( leftValue1 == LOW && leftValue2 == LOW && rightValue1== HIGH && rightValue2== HIGH)
     {
          analogWrite (leftMotor, 2*51);  //The left motor moves with slightly slow speed while right motor moves  with slower speed
   analogWrite (rightMotor,4*51);
     }
     else
     if( leftValue1 == LOW && leftValue2 == HIGH && rightValue1== HIGH && rightValue2== HIGH)
     {
          analogWrite (leftMotor, 1*51);  //The left motor moves with slightly slow speed while right motor moves  with slower speed
   analogWrite (rightMotor,4*51);
     }
     else if ( leftValue1 == LOW && leftValue2 == LOW && rightValue1== LOW && rightValue2== LOW)
     { 
      digitalWrite (rightMotor,HIGH); // The  LEFT motor moves with the full speed where right motor stop
       digitalWrite (leftMotor, HIGH); // Moves in circular path in order to come upon the track
                                        // This is the case when robot is out of path
     }}
   
    
