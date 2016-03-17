#include <stdio.h>
#define NUM_CHARS 256

int main(void)
	{

	int c;
	int indexID = 0;
	long currentCharVal = 0;
	long maxCharVal = 0;
	long freqArray[NUM_CHARS +1];
	
	for(indexID = 0; indexID <= NUM_CHARS; ++indexID)
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
			currentCharVal = ++freqArray[NUM_CHARS];
			if(currentCharVal > maxCharVal)
			{
				maxCharVal = currentCharVal;
			}

		}
	
	}
	int i =0;
	for(i = 0; i < NUM_CHARS; ++i)
	{
		if(freqArray[i] > 0)
		{
			printf("\nAlphaNumeric Values: %c, %d\n", freqArray[c], freqArray[i]);
		}
	}
return 0;
}
