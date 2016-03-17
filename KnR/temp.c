#include <stdio.h>

#define NUM_CHARS 256

int main(void)
{
	//determine values
	int c;
	long freqArray[NUM_CHARS+1];
	long currentCharVal = 0;
	long maxCharVal = 0;
	int indexID = 0;


	//step0 create array
	for (indexID = 0; indexID <= NUM_CHARS; indexID++)
		{
			freqArray[indexID] = 0;
		}

	//step01

	while ((c = getchar()) != EOF)
		{
			if (c < NUM_CHARS)
				{
				currentCharVal = ++freqArray[c];
					if (currentCharVal > maxCharVal)
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


	int i = 0;
	for ( i = 0; i  < NUM_CHARS; ++i)
		{
			if(freqArray[i] > 0 )
			{
				printf("\n");
			printf("freqArray => %c: %d \n",freqArray[NUM_CHARS],freqArray[i]);
		}

	}
	return 0;

}