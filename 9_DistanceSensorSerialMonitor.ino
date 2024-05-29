int trigPin = 13;                               
int echoPin = 12;    
int buzzerPin=8;                                        
int time;                                                     
int distance;  


void setup() {  
  pinMode(trigPin, OUTPUT);                             
  pinMode(echoPin,INPUT); 
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);                         //Initiate the measurement sequence with the ultrasonic sensor.
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(100);
  digitalWrite(trigPin, LOW);
  time = pulseIn(echoPin, HIGH, 11600);                 //We measure the travel time of the sound wave.
  distance= time*0.0345/2;                               //We calculate the distance with the measured time.
Serial.println(distance);
}
