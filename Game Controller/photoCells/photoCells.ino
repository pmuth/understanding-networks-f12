int photocellPin01 = A0;
int photocellPin02 = A1;
int photocellPin03 = A2;
int photocellPin04 = A3;
int photocellPin05 = A4;

int LEDpin01 = 6;
int LEDpin02 = 7;
int LEDpin03 = 8;
int LEDpin04 = 9;
int LEDpin05 = 10;

 // the cell and 10K pulldown are connected to a0
int photocellReading01; // the analog reading from the sensor divider
int photocellReading02;
int photocellReading03;
int photocellReading04;
int photocellReading05;

int LEDbrightness01; //
int LEDbrightness02;
int LEDbrightness03;
int LEDbrightness04;
int LEDbrightness05;

void setup(void) {
// We'll send debugging information via the Serial monitor
Serial.begin(9600); 
}

void loop(void) {
photocellReading01 = analogRead(photocellPin01); 
photocellReading02 = analogRead(photocellPin02); 
photocellReading03 = analogRead(photocellPin03); 
photocellReading04 = analogRead(photocellPin04); 
photocellReading05 = analogRead(photocellPin05); 

Serial.print("Analog reading 1 = ");
Serial.print(photocellReading01); // the raw analog reading
Serial.print("     Analog reading 2 = ");
Serial.print(photocellReading02); // the raw analog reading
Serial.print("     Analog reading 3 = ");
Serial.print(photocellReading03); // the raw analog reading
Serial.print("     Analog reading 4 = ");
Serial.print(photocellReading04); // the raw analog reading
Serial.print("     Analog reading 5 = ");
Serial.println(photocellReading05); // the raw analog reading
/*
// LED gets brighter the darker it is at the sensor
// that means we have to -invert- the reading from 0-1023 back to 1023-0
/*photocellReading01 = 1023 - photocellReading01;
photocellReading02 = 1023 - photocellReading02;
photocellReading03 = 1023 - photocellReading03;
photocellReading04 = 1023 - photocellReading04;
photocellReading05 = 1023 - photocellReading05;
*/
//now we have to map 0-1023 to 0-255 since thats the range analogWrite uses
/*LEDbrightness01 = map(photocellReading01, 0, 1023, 0, 255);
LEDbrightness02 = map(photocellReading02, 0, 1023, 0, 255);
LEDbrightness03 = map(photocellReading03, 0, 1023, 0, 255);
LEDbrightness04 = map(photocellReading04, 0, 1023, 0, 255);
LEDbrightness05 = map(photocellReading05, 0, 1023, 0, 255);
*/
analogWrite(LEDpin01, LEDbrightness01);
analogWrite(LEDpin02, LEDbrightness02);
analogWrite(LEDpin03, LEDbrightness03);
analogWrite(LEDpin04, LEDbrightness04);
analogWrite(LEDpin05, LEDbrightness05);

delay(100);
}
