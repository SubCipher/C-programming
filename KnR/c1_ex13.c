#include <stdio.h>

int main(){
	
	int i;
	int c;
	int wordLen = 0;
	int l = 0;


	int wordLetterCount[10];			
	for(i = 0; i < 10; ++i)
		wordLetterCount[i] = 0;

	while ((c = getchar()) != EOF){
		if (c != ' ' || c != '\t' || c != '\n'){
			++wordLen;
			}

		if ( c == ' ' || c == '\t' || c == '\n'){
			for(i = 0; i < 10; ++i)
			wordLetterCount[l] = wordLen;
			wordLen = 0;	
			++l;
		}
	}
	for( i = 0; i < 10; ++i)
		if (wordLetterCount[i] < 0)
			printf(" *\n");
			
			
	
}
