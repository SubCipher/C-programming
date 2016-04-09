#include <stdio.h>
#define lim 1024

int main(){

	int c,i;
	char s[lim];

	for(i = 0; i < lim -1 && (c =getchar()) != EOF && c != '\n'; ++i)
		s[i] =c;

	if( c == '\n'){
		s[i] = c;
	}
	
	s[i] = '\0';
	
	printf("value of i: %d	| 	value of c: %d		value of lim: %d",i, c, lim); 
	int j;
	for(j = 0; j < i ; ++j){
		printf("%c",s[j]);
	}
	
return i;
}
