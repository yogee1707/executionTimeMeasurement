void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.begin("Calculating. .");
}

double startTime = 0.00, endTime = 0.00, sum = 0.00;
double iterations = 1.000;
int sampleSize[5] = {100, 200, 400, 800, 1000};

void loop() {

  for (int j = 0; j < sizeof(sampleSize) / sizeof(int); j++) {

    for (int i = 0; i <= sampleSize[j]; i++) {
      // calculate the time taken by 'delay' function
      startTime = micros();   //time keeper
      endTime = micros();
      sum += endTime - startTime;
    }

    Serial.print(sampleSize[j]);
    Serial.print("  |  ");
    Serial.println(sum / sampleSize[j]);
    sum = 0;
  }
  
  while (true);

}
