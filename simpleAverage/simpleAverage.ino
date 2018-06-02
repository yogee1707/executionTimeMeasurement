void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

double startTime = 0.00, endTime = 0.00;
double iterations = 1.000;
int sampleSize[5] = {100, 200, 400, 800, 1000};

void loop() {
  
    for (int j = 0; j < sizeof(sampleSize)/sizeof(int); j++) {
  
      startTime = micros();   //time keeper
  
      for (int i = 0; i <= sampleSize[j]; i++) {
        // calculate the time taken by 'delay' function
        delayMicroseconds(100);
      }
  
      endTime = micros();
  
      Serial.print(sampleSize[j]);
      Serial.print("  |  ");
      Serial.println((endTime - startTime) / sampleSize[j]);
    }
  
  while (true);

}
