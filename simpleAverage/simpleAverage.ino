void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

double a = 0.00, b = 0.00;
double iterations = 1.000;
int sampleSize = 1000;

void loop() {
  // calculate the time taken by 'delay' function
  a = micros();
  delayMicroseconds(10);
  a = micros() - a;

  b += a;

  //  Serial.print(iterations);
  //  Serial.print(" | ");
  //  Serial.print(b);
  //  Serial.print(" | ");
  //  Serial.println(b / iterations);

  iterations++;
  if (iterations == sampleSize) {
    Serial.print(iterations);
    Serial.print(" | ");
    Serial.print(b);
    Serial.print(" | ");
    Serial.println(b / iterations);
    while (1);
  }
}
