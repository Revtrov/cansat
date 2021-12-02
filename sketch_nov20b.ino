int pressureValue;
float pressure;
void setup ( ) {
Serial.begin (9600);
}
void loop ( ) {
pressureValue = analogRead (A0);
pressure = ((pressureValue / 1024.0) + 0.095) / 0.0009;
Serial.print("CanSat_name / unique_ID ");
Serial.print("Pressure = ");
Serial.print(pressure);
Serial.println (" millibars");
delay (500);
}
