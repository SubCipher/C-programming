#include <stdio.h>

int main(){


	// declare variable
	int i;
	int c;
	int wordLen = 0;
	int l = 0;

	// declare an array with capacity of 10 
	int wordLetterCount[10];		
	
	// initialize array with for loop and val of 0 
	for(i = 0; i < 10; ++i)
		wordLetterCount[i] = 0;


	// check for white spaces 
	while ((c = getchar()) != EOF){
		if (c != ' ' || c != '\t' || c != '\n'){

	// if there is no white space keep count characters 
			++wordLen;
			}

		//check for white spaces 
		if ( c == ' ' || c == '\t' || c == '\n'){


		// if white spaces found, add val of wordLen to array
			for(i = 0; i < 10; ++i)
			wordLetterCount[l] = wordLen;

		//reset wordLen 
			wordLen = 0;

		//increase val of l to move to next position in array
			++l;
		}
	}


		//print results with for loop
	for( i = 0; i < 10; ++i)
		if (wordLetterCount[i] > 0)
		
			while (wordLetterCount[i] > 0){
			printf("*");
			wordLetterCount[i] = (wordLetterCount[i] -1);
			
	}			
	
}
