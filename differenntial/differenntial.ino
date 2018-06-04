void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(F("Calculating, via differential method..."));
}

double T1 = 0.00, T2 = 0.00, T3 = 0.00;
double total = 0.00, te = 0.00;
double iterations = 1.000;
int sampleSize[] = {1, 2, 4, 5};
double fixedSampleSize = 1000;

void loop() {

  for (int i = 1; i <= fixedSampleSize; i++) {
    T1 = micros();
    delayMicroseconds(100);
    T2 = micros();
    delayMicroseconds(100);
    delayMicroseconds(100);
    T3 = micros();
   
    total += (T3 - T2) - (T2 - T1); //t1-t2/n1-n2
    //Serial.println(total);
  }

  Serial.print("final : ");
  Serial.println(total);

  Serial.print(fixedSampleSize);
  Serial.print("  |  ");
  Serial.println(te = total / fixedSampleSize);

  while (true);

}
