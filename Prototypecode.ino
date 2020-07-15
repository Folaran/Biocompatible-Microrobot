
#include <Servo.h>



Servo kaneki,toka;  //declaring the two servos
int pos1 = 0;   //variable to store start servo position
int pos2 = 120; // variable to store end servo position

void setup() {
  kaneki.attach(5);  // attaches the servo on pin 5 to the servo object
  toka.attach(6);   //// attaches the servo on pin 5 to the servo object
}

void loop() {
  for (pos1 = 0; pos1 <= 120; pos1 += 1) { // goes from 0 degrees to 120 degrees
     // in steps of 1 degree
    kaneki.write(pos1); // tell servo to go to position in variable 'pos'
    
    delay(5);                       // waits 5ms for the servo to reach the position
  }
  for (pos1 = 120; pos1 >= 0; pos1 -= 1) { // goes from 120 degrees to 0 degrees
    kaneki.write(pos1);        
     // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
  for (pos2 = 120; pos2 >= 0; pos2 -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
     // tell servo to go to position in variable 'pos'
    toka.write(pos2);
    delay(5);                       // waits 15ms for the servo to reach the position
  }
  for (pos2 = 0; pos2 <= 120; pos2 += 1) { // goes from 180 degrees to 0 degrees
      
    toka.write(pos2); // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
  
}
