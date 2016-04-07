#include <stdio.h>
#define lim 1024

int main(){

	int c,i;
	char s[lim];

	while( i <  lim){	
	for(i = 0; i < lim -1 && (c =getchar()) != EOF && c != '\n'; ++i)
		s[i] =c;

	if( c == '\n'){
		s[i] = c;
	}
	
	s[i] = '\0';
	
	printf("value of i: %d	| 	value of c: %d		value of lim: %d",i, c, lim); 
	}
return i;
}
