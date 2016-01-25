#include <stdio.h>

int main(){
	
	int i;
	int c;
	int wordLen = 0;
	int l = 0;


	int wordLetterCount[10];			
	for(i = 0; i < 10; ++i)
		wordLetterCount[i] = 9;

	while ((c = getchar()) != EOF){
		if (c != ' ' || c != '\t' || c != '\n')
			++wordLen;

		else if ( c == ' ' || c == '\t' || c == '\n')
			 wordLetterCount[l] = wordLen;
			wordLen = 0;	
			++l;
		}
	for( i = 0; i < 10; ++i)
		printf(" %d\n", wordLetterCount[i]);
		
}
