#include <stdio.h>

#define NUM_CHARS 256

int main(void)
{
	int c;
	long freqArray[NUM_CHARS + 1];
	long thisVal = 0;
	long maxVal = 0;
	int indexID = 0;


	//step0

	for(indexID = 0; indexID <= NUM_CHARS; indexID++)
	{	
		freqArray[indexID] = 0;
	}

	//step1

	while((c = getchar()) != EOF)
	{
		if(c < NUM_CHARS)
		{
			thisVal = ++freqArray[c];
			if(thisVal > maxVal)
			{
				maxVal = thisVal;
			}
		}
		else
		{
			thisVal = ++freqArray[NUM_CHARS];
			if(thisVal > maxVal)
			{
				maxVal = thisVal;
				printf("maxVal: %ld", maxVal);
			}
		}
	}

	//step2

	for(thisVal = maxVal; thisVal > 0; thisVal--)
	{
		printf("%4d |", thisVal);
		for(indexID = 0; indexID <= NUM_CHARS; indexID++)
		{
			if(freqArray[indexID] >= thisVal)
			{
				printf("*");
			}
			else if(freqArray[indexID] > 0)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("       +");
	
	//step3

	for(indexID = 0; indexID <= NUM_CHARS; indexID++)
	{
		if(freqArray[indexID] > 0)
			{
				printf("-");
			}
		}		
	printf("\n       ");
	
	//step4

	for(indexID = 0; indexID < NUM_CHARS; indexID++)
	{
		if(freqArray[indexID] > 0)
		{
			printf("%d", indexID / 100);
		}
	}
	printf("\n       ");

	//step5

	for (indexID = 0; indexID < NUM_CHARS; indexID++)
	{
		if(freqArray[indexID] > 0)
		{
			printf("%d", (indexID - (100 * (indexID /100))) /10 );
		}
	}
	printf("\n       ");

	//step6

	for(indexID = 0; indexID < NUM_CHARS ; indexID++)
	{
		if(freqArray[indexID] > 0)
		{
			printf("%d", indexID - (10 * (indexID /10)));
		}
	}

	//step7
	
	if(freqArray[NUM_CHARS] > 0)
	{
		printf(">%d\n", NUM_CHARS);
	}
	printf("\n");

	return 0;
}
	





