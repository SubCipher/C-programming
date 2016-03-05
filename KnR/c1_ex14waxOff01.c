#include <stdio.h>
#define NUM_CHARS 256

int main(void){

	int freqArray[NUM_CHARS +1];
	int c;
	long currentCharVal = 0;
	long numOccurancesCharVal = 0;
	int indexID = 0;


	for (indexID = 0; indexID <= NUM_CHARS; indexID++){
		freqArray[indexID] = 0;
		}

	while ((c = getchar()) != EOF){
		if( c < NUM_CHARS)
			{
			currentCharVal = ++freqArray[c];
				if(currentCharVal > numOccurancesCharVal){
					numOccurancesCharVal = currentCharVal;
				}
			}


			else 
			{
				currentCharVal = ++freqArray[NUM_CHARS];
				if(currentCharVal > numOccurancesCharVal)
				{
					numOccurancesCharVal = currentCharVal;
				}
			}
		} 
}