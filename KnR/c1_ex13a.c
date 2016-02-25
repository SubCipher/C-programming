#include <stdio.h>

#define MAXWORDLEN 10

int main(){


	// declare variable
	int i;
	int c;
	int wordLen = 0;
	int l = 0;
	int j = 0;

	// declare and initilize array
	int wordLetterCount[MAXWORDLEN +1];		
	
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
			wordLetterCount[l] = wordLen-1;

			//reset wordLen 
			wordLen = 0;

			//increase val of l to move to next position in array
			++l;
		}
	}
	
	//print results with for loop
	while(j < MAXWORDLEN){
			for (j = 0 ; j < MAXWORDLEN; ++j){
			printf("%2d | ", j);
			//printf("%d", wordLetterCount[j]);
			int l1 =0;
				while (l1 < MAXWORDLEN){
					int l2 = 0;
					while(l2 < MAXWORDLEN){
						if (l1 == wordLetterCount[l2])
							{
							putchar('*');
							}
					l2++;
					}
				
				l1++;
				putchar('\n');

				}

			}


		}
		return 0;
		
	}
