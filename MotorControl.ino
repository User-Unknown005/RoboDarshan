const int motorRPin1 = 6;                
const int motorRPin2 = 9; 
const int motorLPin1 = 5;            
const int motorLPin2 = 3;

void setup() {
  pinMode(motorLPin1,OUTPUT);        
  pinMode(motorLPin2,OUTPUT);
  pinMode(motorRPin1,OUTPUT);        
  pinMode(motorRPin2,OUTPUT);

}

void loop() {
  drive(250,250);
}

void drive(int pwm_A, int pwm_B)
{
  set_motor_pwm(pwm_A, motorRPin1, motorRPin2);
  set_motor_pwm(pwm_B, motorLPin1, motorLPin2);
}
void set_motor_pwm(int pwm, int IN1_PIN, int IN2_PIN)
{
  if (pwm < 0) {  // reverse speeds
    analogWrite(IN1_PIN, -pwm);
    digitalWrite(IN2_PIN, LOW);

  } else { // stop or forward
    digitalWrite(IN1_PIN, LOW);
    analogWrite(IN2_PIN, pwm);
  }
}
