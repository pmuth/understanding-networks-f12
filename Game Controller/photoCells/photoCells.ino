int directionLeft = A0;
int directionRight = A1;
int directionUp = A2;
int directionDown = A3;
int connectDisconnect = A4;

 // Analog readings from photocells
int readingLeft; // the analog reading from the sensor divider
int readingRight;
int readingUp;
int readingDown;
int readingConnectDisconnect;

void setup(void) {
// We'll send debugging information via the Serial monitor
Serial.begin(9600); 
}

void loop(void) {
readingLeft = analogRead(directionLeft); 
readingRight = analogRead(directionRight); 
readingUp = analogRead(directionUp); 
readingDown = analogRead(directionDown); 
readingConnectDisconnect = analogRead(connectDisconnect); 

Serial.print("Analog reading 1 = ");
Serial.print(readingLeft); // the raw analog reading
Serial.print("     Analog reading 2 = ");
Serial.print(readingRight); // the raw analog reading
Serial.print("     Analog reading 3 = ");
Serial.print(readingUp); // the raw analog reading
Serial.print("     Analog reading 4 = ");
Serial.print(readingDown); // the raw analog reading
Serial.print("     Analog reading 5 = ");
Serial.println(readingConnectDisconnect); // the raw analog reading

delay(100);
}
