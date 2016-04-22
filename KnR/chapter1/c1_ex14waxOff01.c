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

	//step 2
	for(currentCharVal = numOccurancesCharVal; currentCharVal > 0; currentCharVal--)
	{
		for(indexID = 0; indexID <= NUM_CHARS; indexID++)
		{
			if(freqArray[indexID] >= currentCharVal)
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
	printf("     +");

	//step 3
	for(indexID = 0; indexID <= NUM_CHARS; indexID++)
	{
		if(freqArray[indexID] > 0)
			{
				printf("-");
			}
		}
	printf("\n     ");


	//step 4


	for(indexID = 0; indexID < NUM_CHARS; indexID++)
	{
		if(freqArray[indexID] > 0)
		{
			printf("%d", indexID / 100);
		}
	}

	printf("\n     ");


	//step 5

	for(indexID = 0; indexID < NUM_CHARS ; indexID++)
	{
		if(freqArray[indexID] > 0)
		{
			printf("%d",(indexID - (100 * (indexID/100))) /10);
		}

	}
	printf("\n     ");
	
	//step 6

	for(indexID = 0; index < NUM_CHARS; indexID++)
	{
		if(freqArray[indexID] > 0)
		{
			printf("%d", indexID - (10 * (indexID /10)));
		}
	}

	if(freqArray[NUM_CHARS] > 0)
	{
		printf(">%d\n", NUM_CHARS);
	}
	printf("\n");

	return 0;


}