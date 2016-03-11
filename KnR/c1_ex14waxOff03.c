#include <stdio.h>
#define NUM_CHARS 256

int main(void){
	
	int c;
	int indexID;
	long currentCharVal;
	long maxCharVal;
	
	long freqArry[NUM_CHARS +1]
	for(indexID = 0; indexID < NUM_CHARS; ++indexID)
		{
			freqArray[indexID] = 0;
		}
	while((c = getchar()) != EOF)
		{
			if(c < NUM_CHARS)
			{
				currentCharVal = ++freqArray[c];
				if(currentCharVal > maxCharVal)
					{
						maxCharVal = currentCharVal;
					}
			}
			else
				{
					currentCharVal = ++freqArray[NUM_CHAR];
					{
						if(currentCharVal > maxCharVal)
							{
								maxCharVal = currentCharVal;
							}
					}
				}

	for(currentCharVal = maxCharVal; currentCharVal > 0; currentCharVal --)
		{
			for(indexID = 0; indexID <= NUM_CHARS; indexID++)
			{
			if(freqArray[indexID] >= currentCharVal)
			{
				printf("*");
			}
			else if (freqArray[indexID] > 0)
			{
				printf(" ");
			}

		}
		printf("\n");
	}
	printf("     +");




























