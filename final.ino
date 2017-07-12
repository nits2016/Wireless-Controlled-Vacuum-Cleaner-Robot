
int motor1Pin1 = 3; // pin 2 on L293D IC and 3 of arduino
int motor1Pin2 = 4; // pin 7 on L293D IC and 4 of arduino
int motor2Pin1 = 8; // pin 10 on L293D IC and 8 of arduino
int motor2Pin2 = 9; // pin 15 on L293D IC and 9 of arduino 
int fan = 11;// 7 of arduino
int state;
int blow = 0;
int flag=0;        //makes sure that the serial only prints once the state
int stateStop=0;
void setup() {
    // sets the pins as outputs:
    pinMode(motor1Pin1, OUTPUT);
    pinMode(motor1Pin2, OUTPUT);
    pinMode(motor2Pin1, OUTPUT);
    pinMode(motor2Pin2, OUTPUT);
    pinMode(fan, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    //if some date is sent, reads it and saves in state
    if(Serial.available() > 0){     
      state = Serial.read();   
      flag=0;
    }
    
     if(state == '1') {//49
        digitalWrite(motor1Pin1, LOW); 
        digitalWrite(motor1Pin2, HIGH);
        digitalWrite(motor2Pin1, HIGH);
        digitalWrite(motor2Pin2, LOW);
        if(flag == 0){
          Serial.println("Reverse!");
          flag=1;
        }
    }
    else if(state == '2') {//50
        digitalWrite(motor1Pin1, LOW); 
        digitalWrite(motor1Pin2, HIGH); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, HIGH);
        if(flag == 0){
          Serial.println("Turn LEFT");
          flag=1;
        }
    }
    else if (state == '3') {//51
        digitalWrite(motor1Pin1, LOW); 
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, LOW);
        if(flag == 0){
          Serial.println("STOP!");
          flag=1;
        }
    }
    else if(state == '4') {//52
        digitalWrite(motor1Pin1, HIGH); 
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, HIGH);
        digitalWrite(motor2Pin2, LOW);
        if(flag == 0){
          Serial.println("Turn RIGHT");
          flag=1;
        }
    }
      else if(state == '5') {
        digitalWrite(motor1Pin1, HIGH);
        digitalWrite(motor1Pin2, LOW);
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, HIGH);
        if(flag == 0){
          Serial.println("Go Forward!");
          flag=1;
        }
    }
    if(state=='6'){
      digitalWrite(fan,HIGH);
    }
    else if(state=='7'){
      digitalWrite(fan,LOW);
    }
    //For debugging purpose
    //Serial.println(state);
}
