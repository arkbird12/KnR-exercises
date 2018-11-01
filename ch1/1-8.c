#include <stdio.h>

int main() {
  int blanks = 0;
  int tabs = 0;
  int newlines = 0;

  char c;
  while(c = getchar() != EOF) {
    if(c == ' ')
      ++blanks;
    if(c == '\t')
      ++tabs;
    if(c == '\n')
      ++newlines;
  }
  printf("Blanks: %d Tabs: %d Newlines: %d\n", blanks, tabs, newlines);
    
  /*
    while eof != \n or \t \" " etc 
    increment counts
    once done print counts
   */
}
