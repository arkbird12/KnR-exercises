#include <stdio.h>

int main() {
    int index;
    char c;
    
    while((c = getchar()) != EOF) {
        if(c != '\n' && c != ' ' && c != '\t') {
            putchar(c);
        }
        else
            continue;
    }
}