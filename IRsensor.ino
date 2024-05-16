const int irPins[5] = {2,4,7,8,12};
int irSensors[5] = {0,0,0,0,0}; 
// B stands for binary value. here it represents 5bit binary.
void setup(){
   Serial.begin(9600);
   for (int i = 0; i < 5; i++)
   {
      pinMode(irPins[i], INPUT);
   }
}
void loop() {
  for (int count=0;count<5;count++)
    {
       irSensors[count]=digitalRead(irPins[count]);
    } 
  // Now Displaying the output.
  for(int i=0;i<5;i++){
    Serial.print(irSensors[i]);
  }
  Serial.println();
}
