#include <Bounce2.h>

#include <Keyboard.h>

Bounce button2 = Bounce(2, 5);  
Bounce button3 = Bounce(3, 5);  
Bounce button4 = Bounce(4, 5);
Bounce button5 = Bounce(5, 5);  
Bounce button6 = Bounce(6, 5);  
Bounce button7 = Bounce(7, 5);  
// *********************************************
int  buttonPin1 = 2; 
int  buttonPin2 = 3;
int  buttonPin3 = 4;
int  buttonPin4 = 5;
int  buttonPin5 = 6;

int xPin = A1;
int yPin = A0;
int buttonPin7 = 7;

int xPosition = 500;
int yPosition = 0;

int buttonState = 0;         
int lastButtonState = 0;     
int xval=0;
int yval=0;

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin7, INPUT);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  
}  

void loop() {

        xval = analogRead(xPin);
      Serial.print (xval);
      Serial.print (";");
      
        yval= analogRead(yPin);
        Serial.println (yval);
     

 if (xval < 750){
Keyboard.print("d");
}
if (xval > 850) {
Keyboard.print("a");
}
if (yval < 750){
Keyboard.print("s");
}
if (yval > 850) {
Keyboard.print("w");
}
  
  buttonState = digitalRead(buttonPin1);
  
    if (buttonState == HIGH) {
      Keyboard.print("q");
    }
   buttonState = digitalRead(buttonPin2);
    if (buttonState == HIGH) {
      Keyboard.print("e");
    }
 buttonState = digitalRead(buttonPin3);
    if (buttonState == HIGH) {
      Keyboard.print("r");
    }
 buttonState = digitalRead(buttonPin4);
    if (buttonState == HIGH) {
      Keyboard.print("j");
    }
 buttonState = digitalRead(buttonPin5);
    if (buttonState == HIGH) {
      Keyboard.print("k");
    }  }
