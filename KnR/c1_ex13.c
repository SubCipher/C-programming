#include <stdio.h>


int main(){
	
	int c,i,bSpace, tSpace,nLine;
	c = 0;
	int numOfLetters;
	numOfLetters = 0;
	int letterCount[10];			

	nLine = tSpace = bSpace = numOfLetters;

	for(i = 0; i < 10; i++)
		letterCount[i] = 0;

	while ((c = getchar()) != EOF){
		if (c != ' ' || c != '\t' || c != '\n')
		numOfLetters++;
		else 
			( letterCount[i] = numOfLetters);
			numOfLetters = 0;	

		}		
	printf("number of letters array  %d" , letterCount[0]);

}
