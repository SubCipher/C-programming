#include <stdio.h>

int main(){


	// declare variable
	int i;
	int c;
	int wordLen = 0;
	int l = 0;
	int j = 0;

	// declare and initilize array
	int wordLetterCount[10];		
	
	for(i = 0; i < 10; ++i)
		wordLetterCount[i] = 0;


	// check if white spaces present or not
	while ((c = getchar()) != EOF){

		if (c != ' ' || c != '\t' || c != '\n')
		{

		// if no white space count characters 
			++wordLen;
		}

		//if white spaces present  
		if ( c == ' ' || c == '\t' || c == '\n')
		{
			for(i = 0; i < 10; ++i)
			wordLetterCount[l] = wordLen;

			//reset wordLen 
			wordLen = 0;

			//increase val of l to move to next position in array
			++l;
		}
	}


/*		for(i = 0; i < 10; ++i){

			printf("%d\n", wordLetterCount[i]);
		}
*/
	//print results with for loop
	for( i = 0; i < 10; ++i){
		printf("%2d | ",i);
		//printf("%d", wordLetterCount[i]);

		while (l < 10){

			for( j = 0 ; j < 10; ++j){
				if(wordLetterCount[j] == l){
				wordLetterCount[j] = l;
			}		
		}
		l++;


		printf("%d", wordLetterCount[i]);
		printf("\n");

}
}
	
/*
		for(j = 0; j < wordLetterCount[i]; ++j)
			if(wordLetterCount[i] == j){
			putchar('*');
			putchar('\n');
			}
		}
*/
return 0;
		
	
}





