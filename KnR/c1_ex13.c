#include <stdio.h>


int main(){
	
	int c,i,l;
	c = 0;
	int wordLen;
	wordLen =  0;
	l = 0;
	int wordLetterCount[10];			

	for(i = 0; i < 10; i++)
		wordLetterCount[i] = 0;

	while ((c = getchar()) != EOF){
		if (c != ' ' || c != '\t' || c != '\n')
			wordLen++;
		else 
		for (i=0; i< 10; i++)		
		wordLetterCount[i] = wordLen;
			wordLen = 0;	
			l++;
		
		printf(" %d", wordLetterCount[i]);
	}
}
