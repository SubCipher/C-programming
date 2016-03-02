#include <stdio.h>
#define NUM_CHARS 256

int main(void){

	int c;
	long currentCharVal = 0;
	long maxCharVal = 0;
	int i;

	long freqArray[NUM_CHARS + 1];
	int indexID= 0;
	

	c = getchar();

	for( indexID = 0 ; indexID < NUM_CHARS; indexID++){
		freqArray[indexID]=0;
		}
	currentCharVal = ++freqArray[c];
	if (freqArray[indexID] > 0){
	printf("indexID=%d \n indexID array value= %d\n", indexID,freqArray[c]);
	}
	
/*
	for (i = 0; i < NUM_CHARS; ++i)

	{printf("arrayValues: %d   ",freqArray[i]);
	}
*/

return 0;

}
