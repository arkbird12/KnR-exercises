/* print Fahernheit-Celsius table; floating-point version. */
#include <stdio.h>

float convFtoC(float f);

int main(void) {
	float fahr;//, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;  
	step = 20;
	fahr = lower;
/* --------------------------------------------------------------- */
	while(fahr <= upper) {
		printf("%3.0f %6.1f\n", fahr, convFtoC(fahr));
		fahr += step;
	}

  	return 0;
}

float convFtoC(float f) {
	return (5.0/9.0) * (f-32);
}

