#include <stdio.h>

#define MAXLIM 1024

int main(){

	int c, wordCount;
	int nonWordCount;

	int indexID;
	char s[MAXLIM];
	for( indexID = 0; indexID < MAXLIM; ++indexID){
		s[indexID] = 0;

		}

	while((c = getchar()) != EOF){
	
		if(c != ' ' || c != '\t'  || c != '\n'){
			s[indexID] = c;
			++indexID;
			++wordCount;
			}
		if(c == ' ' || c == '\t' || c == '\n'){
			s[indexID] = c;
			++nonWordCount;
			++indexID;					

			}
		
		}

		int i = 0;	
		printf("word count: %d  non-word count: %d", wordCount, nonWordCount);
		for( i = 0; i < indexID -1; ++i){
			printf("%d", s[i]);
		
		}

	return 0;

}
