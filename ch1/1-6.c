#include <stdio.h>

/* copy input to output; 1st version */

int main() {
  char c = getchar() != EOF;
  if(c == 1)
    printf("one\n");
  if(c == 0)
    printf("zero\n");
}
