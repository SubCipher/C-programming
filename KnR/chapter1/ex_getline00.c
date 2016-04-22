#include <stdio.h>

#define MAXLIMIT 1024

int main(){

	int i,c;
	char s[MAXLIMIT];
	
	for(i = 0; i < MAXLIMIT -1 & (c =getchar()) != EOF; ++i)
		s[i] = c;
		
	if( c == '\n')
		s[i] = c;

	s[i] = c;

	int j;
	for( j = 0; j < i; ++j)
		printf("%c", s[j]);
}