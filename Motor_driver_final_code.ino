#define E1 10  // Enable Pin for motor 1 
#define I1 8  // Control pin 1 for motor 1
#define I2 9  // Control pin 2 for motor 1

 
void setup() {
 
    pinMode(E1, OUTPUT);
    pinMode(I1, OUTPUT);
    pinMode(I2, OUTPUT);
    
}
 
void loop() {
 
    analogWrite(E1, 255); // Run in half speed
    digitalWrite(I1, HIGH);
    digitalWrite(I2, LOW); 
    delay(10000);
    
    digitalWrite(E1, LOW);
    delay(200);
    
    analogWrite(E1, 153);  // Run in full speed
    digitalWrite(I1, HIGH);
    digitalWrite(I2, LOW);
    delay(10000);
}
