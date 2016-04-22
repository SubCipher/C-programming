#include <stdio.h>

#define SPACE ' '
#define TAB '\t'
#define MAXLIMIT 1024
#define n 6.5


int main(){

	int i,c;
	char s[MAXLIMIT];
	for(i = 0; i < MAXLIMIT -1 && (c = getchar()) != EOF; ++i)
		if(c == '\t'){
			int j;
			for(j = 0; j < n; ++j){
				s[i] = SPACE;	
				++i;
			}
		}
		else
			{
			s[i] = c;
			}

		s[i] = '\0';

	int l;
	for(l = 0; l < i ; ++l)
		printf("%c", s[l]);

	return 0;
}
	