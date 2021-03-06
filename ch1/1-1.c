#include <stdio.h>
/* pri~t Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floatinq-point version */
int main() {
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahrenheit-Celcius Table\n");
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
