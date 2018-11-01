/* Write a function reverse (s) that reverses the character string s. Use it to write a program that reverses its input a line at a time */

#include <stdio.h>

char reverse(char s[], int size);
int lineget(char s[], int lim);

int main() {
	char s[] = { 'b', 'a', 't', 'm', 'a', 'n' };
	reverse(s, 6);
}

char reverse(char s[], int size) {
	char temp_c;
	int temp_i;

	printf("%c\n", s[0]);
	
	temp_i = size - (0+1);
	temp_c = s[temp_i];
	s[temp_i] = s[0];
	s[0] = temp_c;

	printf("%c\n", s[0]);
	putchar('\n');
/* -------------------------------------------------------- */
	printf("%c\n", s[1]);
	
	temp_i = size - (1+1);
	temp_c = s[temp_i];
	s[temp_i] = s[1];
	s[1] = temp_c;

	printf("%c\n", s[1]);
	putchar('\n');
/* -------------------------------------------------------- */
	printf("%c\n", s[2]);
	
	temp_i = size - (2+1);
	temp_c = s[temp_i];
	s[temp_i] = s[2];
	s[2] = temp_c;

	printf("%c\n", s[2]);
	putchar('\n');
/* --------------------------------------------------------- */
	printf("%c\n", s[3]);
	
	temp_i = size - (3+1);
	temp_c = s[temp_i];
	s[temp_i] = s[3];
	s[3] = temp_c;

	printf("%c\n", s[3]);
	putchar('\n');
/* --------------------------------------------------------- */
	printf("%c\n", s[4]);
	
	temp_i = size - (4+1);
	temp_c = s[temp_i];
	s[temp_i] = s[4];
	s[4] = temp_c;

	printf("%c\n", s[4]);
	putchar('\n');
/* --------------------------------------------------------- */
	printf("%c\n", s[5]);
	
	temp_i = size - (5+1);
	temp_c = s[temp_i];
	s[temp_i] = s[5];
	s[5] = temp_c;

	printf("%c\n", s[5]);
	putchar('\n');

	/* for(int i = 0; i <= (sizec); i++) {
		temp_i = size - (b+1);
		temp_c = s[temp_i];
		
		s[temp_i] = s[i];
		s[i] = temp_c;
	}
	
	for(int i = 0; i <= size; i++) {
			putchar(s[i]);	
	}	 
	putchar('\n'); */
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