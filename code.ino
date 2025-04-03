int pump=2;
int trig_ Pin=3; int echo_Pin=4;
long Time;
int distance;
void setup() {
Serial.begin(9600);
pinMode (trig_Pin,OUTPUT) ; pinMode (echo_Pin, INPUT);
pinMode (pump ,OUTPUT);
void loop() F
digitalWrite(trig_Pin, LOW);
delayMicroseconds(2);
digitalwrite(trig_Pin,HIGH);
delayMicroseconds (10);
digitalwrite(trig_Pin, LOW);
Time-pulseIn(echo _Pin,HIGH); distance=Time*9.034/2;
Serial.print ("Distance:");
Serial.printIn (distance);
if (distance<15)
{
digitalwrite(pump ‚HIGH);
7
else
{
digitalWrite(pump, LOW);
7
