int ledPin =13;
void setup() {
 Serial.begin(9600); 
pinMode(ledPin,OUTPUT);//set the led pin as output
}

void loop() {
 int sensorValue=analogRead(A0);//read the input on analog pin a0
 float voltage =sensorValue*(5.0/1023.0);//convert the analog reading (from0-1023) to a voltage (0-5)
 Serial.println(voltage);// print out the value of voltage
if(voltage<3){
  digitalWrite(ledPin,HIGH);// if the value of voltage less than 3 volts ,the led turn on
}
else{
  digitalWrite(ledPin,LOW);
}
}
