#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main() {
    float celcius, fahr;
    int lower, upper, step;

    lower = 0; 
    upper = 300;
    step = 20;

    
    celcius = lower;
    while(celcius <= upper) {
        fahr = (((celcius*9)/5)+32);
        printf("%3.0f %6.1f\n", celcius, fahr);
        celcius += step;
    }
}
