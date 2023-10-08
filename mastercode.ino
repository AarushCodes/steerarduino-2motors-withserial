int state = 0;
//Motor 1 pins(left side)
int ena = 5;
int in1 = 8;
int in2 = 7;
// motor 2 pins(right side)
int ena2 = 3
int in3 = 4
int in4 = 2

void setup() {
  pinMode(LED_BUILTIN, OUTPUT)
  digitalWRITE(LED_BUILTIN, LOW)
  Serial.begin(38400)
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

}

void loop() {
  if (Serial.available() > 0) {
    state = Serial.read()
  }

  if (state == 'forward') {
    //Clockwise full speed
    digitalWrite(in1, HIGH);
    digitalWrite(in2,LOW);
    analogWrite(ena, 255);
    digitalWrite(in3, HIGH);
    digitalWrite(in4,LOW);
    analogWrite(ena2, 255)
    
    delay(5000);
    analogWrite(ena, 0);
    analogWrite(ena2, 0);

  }

  if (state == 'backwards'){
    // counter cw full speed
    digitalWrite(in1, LOW);
    digitalWrite(in2,HIGH);
    analogWrite(ena, 255);
    digitalWrite(in3, LOW);
    digitalWrite(in4,HIGH);
    analogWrite(ena2, 255)
    
    delay(5000);
    analogWrite(ena, 0);
    analogWrite(ena2, 0);
  }

  if (state == 'left'){
    digitalWrite(in1, HIGH);
    digitalWrite(in2,LOW);
    analogWrite(ena, 100);
    digitalWrite(in3, HIGH);
    digitalWrite(in4,LOW);
    analogWrite(ena2, 255)
    
    delay(5000);
    analogWrite(ena, 0);
    analogWrite(ena2, 0);

  }

  if (state == 'right'){
    digitalWrite(in1, HIGH);
    digitalWrite(in2,LOW);
    analogWrite(ena, 255);
    digitalWrite(in3, HIGH);
    digitalWrite(in4,LOW);
    analogWrite(ena2, 100)
    
    delay(5000);
    analogWrite(ena, 0);
    analogWrite(ena2, 0);

  }
}
