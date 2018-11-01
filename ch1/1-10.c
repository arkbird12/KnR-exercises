#include <stdio.h>

int main( void ) {
    char c;
    while((c = getchar()) != EOF) {
        if(c == '\t')
            putchar('\\t');
        if(c == '\b')
            putchar('\\b');
        if(c == '\\')
            putchar('\\');
    }
}