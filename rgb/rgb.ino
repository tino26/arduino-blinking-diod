int ledPinR = 11;   // the number of the LED Red pin
int ledPinG = 10;   // the number of the LED Green pin 
int ledPinB = 9;    // the number of the LED Blue pin 
void setup() { 
  // initialize the LED pin as an output: 
pinMode(ledPinR, OUTPUT);   
pinMode(ledPinG, OUTPUT);   
pinMode(ledPinB, OUTPUT); 
}  
void loop() { 
// Generate three random numbers between 0-255 as the output PWM duty cycle of ledPin   
rgbLedDisplay(random(256), random(256), random(256));   
delay(500); 
}  
void rgbLedDisplay(int red, int green, int blue) {   
// Set three ledPin to output the PWM duty cycle   
analogWrite(ledPinR, constrain(red, 0, 255));   
analogWrite(ledPinG, constrain(green, 0, 255));   
analogWrite(ledPinB, constrain(blue, 0, 255)); 
} 
