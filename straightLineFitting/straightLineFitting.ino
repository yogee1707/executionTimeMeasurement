volatile double startTime = 0.00, endTime = 0.00;
double iterations = 1.000, total = 0.00;
int sampleSize[] = {100, 200, 400, 800, 1000};
int samples = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Sample Size = ");
  Serial.println(samples);
  Serial.println("Calculating....");
  
}

void loop() {

  for (int i = 1; i <= samples; i++) {

    startTime = micros();   //time keeper

    // calculate the time taken by 'delay' function
    delayMicroseconds(100);

    endTime = micros();

    total += endTime - startTime;

    //Serial.print(i);
    //Serial.print(",");
    Serial.println(total);
  }

  while (true);

}
