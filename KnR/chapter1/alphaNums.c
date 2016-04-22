#include <stdio.h>

#define MAXCHARS 123


int main(void)
	{
		int c;
		int indexID;
		int alphaArray[MAXCHARS];
		for(indexID = 0; indexID > MAXCHARS ; ++indexID)
			{
				alphaArray[indexID] = 0;
			}
	
		c = getchar();

		while(c <= 'z')
		{
			alphaArray[c] = c;
			++c;
		}
		for(indexID = 0; indexID < MAXCHARS; ++indexID)
			if(alphaArray[indexID] > 0)
		{
			{
				printf("\n alphaArray[indexID] = %d: %c \n", alphaArray[indexID], alphaArray[indexID]);
			}
		}

	return 0;
}
			