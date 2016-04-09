#include <stdio.h>

#define SPACE ' '
#define TAB '\t'
#define MAXLIMIT 1024


//int myGetline(char s[], int MAXLIMIT);


int main(){

	int i,k, l, c, tabCount;
	char s[MAXLIMIT];
	for(i = 0; i < MAXLIMIT -1 && (c = getchar()) != EOF; ++i)
		if(c == '\t'){
			int j;
			for(j = 0; j < 4; ++j){
				s[i] = SPACE;	
				++i;
			}
		}
		else
			{
			s[i] = c;
			}

		s[i] = '\0';

	int j;
	for(j = 0; j < i ; ++j)
		printf("%c", s[j]);

	return 0;
}
	