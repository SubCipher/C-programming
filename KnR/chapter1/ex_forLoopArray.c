#include <stdio.h>
#define MAX_LIMIT 1024



int main(){

	int i, c;
	char s[MAX_LIMIT];

	for(i = 0; i < MAX_LIMIT -1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
		if( c == '\n'){
			s[i] = c;
		}

		s[i] = '\0';
	int j;

	for(j = 0; j < i; ++j){		
	printf("%c", s[j]);
	}
	return i;



}
			
	