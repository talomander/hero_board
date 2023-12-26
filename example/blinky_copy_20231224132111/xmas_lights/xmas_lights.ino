#define pin_cabin_lights 12
#define pin_cabin_lights_2 13

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(pin_cabin_lights, OUTPUT);
  pinMode(pin_cabin_lights_2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int long_wait = 1000;
  int short_wait = 1000;
  digitalWrite(pin_cabin_lights, HIGH); 
  digitalWrite(pin_cabin_lights_2, HIGH); 
  delay(short_wait);           
  digitalWrite(pin_cabin_lights, LOW); 
  digitalWrite(pin_cabin_lights_2, LOW);
  delay(100);                    
}
