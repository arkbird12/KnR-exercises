/* Write a program to print all input lines that are longer than 80 characters. 
   Algorithm 1.0: 
   1.) 

*/
#include <stdio.h>

#define MAXLEN 1000

int main() {
    int len = 0;
    char c, in[MAXLEN];

    while((c = getchar()) != EOF) {
        in[len] = c;
        len++;
    }
    if(len >= 80) {
        for(int i = 0; i <= len; i++) 
            printf("%c", in[i]);
    }
}