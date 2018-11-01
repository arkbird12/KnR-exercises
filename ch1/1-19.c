/* Write a function reverse (s) that reverses the character string s. Use it to write a program that reverses its input a line at a time */

#include <stdio.h>

#define MAX 1000

char reverse(char s[], int size);
int lineget(char s[], int lim);

int main() {
	char s[] = { 'i', 'h', 's', 'i', 'r' };
	int size = 5;
	
	reverse(s, size);
}

char reverse(char s[], int size) {
	char temp_c;
	int temp_i;
	
	char out[size];

	for(int i = 0; i <= (size); i++) {
		temp_i f= size - (i+1);
		temp_c = s[temp_i];
		
		s[temp_i] = s[i];
		out[i] = temp_c;
	}
	
	for(int i = 0; i <= size; i++) {
			putchar(out[i]);	
	}	 
	putchar('\n');
}  

int lineget(char s[], int lim) {
	int c,i;

	for(i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
	s[i] = c;

	if (c == '\n') {
		s[i] = c;
		//++i;
	}

	s[i] = '\0';
	return i
	;
}