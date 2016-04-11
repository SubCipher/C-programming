#include <stdio.h>

#define MAXLIMIT 1024

int main(){

	int c, i;
	int blankCount = 0;
	int tabSpace = 4;
	int spaces = 0;
	int ts = 0;
	char s[MAXLIMIT];

	while((c = getchar()) != EOF){
		
		if(c != ' ' ){
			s[i] = c;
			blankCount = 0;
			++i;
		}

		if(c ==' '){
			++blankCount;
			if(blankCount > tabSpace){
				s[i] = '\t';
				++i;
				if((blankCount % tabSpace) > 0)
					spaces = tabSpace % blankCount;
					printf("%d",spaces);
				for(ts = 0; ts < spaces; ++ts) 
					s[i] = ' ';
					++i;
				blankCount = 0;
				spaces = 0;
				}
			}
			else if(c ==' ' && s[i-1] !=' '){
				s[i] = ' ';
			}

			}
		int j =0;
		for(j = 0; j < i; ++j)
			printf("%c",s[j]);
return 0;

}

		

