
#include <stdio.h>
#define NUM_CHARS 256

int main(void)
	{

	int c;
	int indexID;
	long currentCharVal;
	long maxCharVal;
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
	for(i = 0; i <= NUM_CHARS; ++i)
	{
		if(freqArray[i] > 0)
		{
			printf("\nAlphaNumeric Values: %c, %d\n", freqArray[i], freqArray[i]);
		}
	}
return 0;
}




