#include <stdio.h>

#define MAXWORDLEN 10
int main(void)
 {

	int c;
	int inspace = 0;
	long lengthOfArray[MAXWORDLEN + 1];
	int wordLen = 0;

	int firstLetter = 1;
	long thisVal = 0;
	long maxVal = 0;
	int thisIdx = 0;
	int done = 0;

	for(thisIdx = 0; thisIdx <= MAXWORDLEN; thisIdx++){
		lengthOfArray[thisIdx] = 0;
	}

	while(done == 0){
		c = getchar();
		if(c == ' ' || c == '\t' || c == '\n' || c == EOF){
			if(inspace == 0){
				firstLetter = 0;
				inspace = 1;
				
				if(wordLen <= MAXWORDLEN){
					if (wordLen > 0) { 
						thisVal = ++lengthOfArray[wordLen -1];
							if(thisVal > maxVal){
								maxVal = thisVal;
							}
					}
				}
				else{
					thisVal = ++lengthOfArray[MAXWORDLEN];
					if(thisVal > maxVal){
						maxVal = thisVal;
					}
				}
			}
			if(c == EOF){
				done = 1;
			}
		}
		else{
			if(inspace == 1 || firstLetter == 1){
				wordLen = 0;
				firstLetter = 0;
				inspace = 0;
			}
			++wordLen;
		}
	}

	for(thisVal = maxVal; thisVal > 0; thisVal--){
		printf("%4d | ", thisVal);

		for(thisIdx = 0; thisIdx <= MAXWORDLEN; thisIdx++){
			if(lengthOfArray[thisIdx] >= thisVal){
				printf("*  ");
			}
			else{
			printf("    ");
			}
			}
			printf("\n");
		}
		printf("     +");
		
		for(thisIdx = 0; thisIdx <= MAXWORDLEN; thisIdx++){
			printf("---");
		}
					
		printf("\n       ");
					
		for(thisIdx = 0; thisIdx < MAXWORDLEN; thisIdx++){
			printf("%2d ",thisIdx +1);
		}
		printf(">%d\n", MAXWORDLEN);

return 0;
}

