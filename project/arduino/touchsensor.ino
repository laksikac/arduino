const int touch_switch = 2;
int touchstate = 0;
const int ledPin = 13;



void setup(){
  Serial.begin(9600);
  pinMode(touch_switch, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{ 
  touchstate = digitalRead(touch_switch);
 if(touchstate == LOW){
    //your command
    Serial.println("Touch switch on");
    digitalWrite(ledPin, HIGH);
    
    
    delay(120);
  }
  else if (touchstate == HIGH){
    //your command
    Serial.println("Touch switch off");
    
    digitalWrite(ledPin, LOW);
    delay(120);
  }
  
}
