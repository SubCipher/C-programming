#include <stdio.h>
#define MAXWORDLEN 15

int main(void){

	int c;
	int inspace = 0;
	long lengthArray[MAXWORDLEN +1];
	int wordLen = 0;

	int firstLetter = 1;
	long wordCountVal = 0;
	long maxVal = 0 ;
	int arrayIndexID = 0;
	int done = 0;

	for (arrayIndexID = 0; arrayIndexID <= MAXWORDLEN; arrayIndexID++){
		lengthArray[arrayIndexID] = 0;
	}

	while (done == 0){
		c = getchar();
		if (c == ' ' || c =='\t' || c == '\n' || c ==EOF){
			if (inspace == 0){
				firstLetter = 0;
				inspace = 1;

				if (wordLen <= MAXWORDLEN){
					if(wordLen > 0){
						wordCountVal = ++lengthArray[wordLen -1];		
						if (wordCountVal > maxVal){
							maxVal = wordCountVal;
							}
						}
					}
	
				else{
					wordCountVal = ++lengthArray[MAXWORDLEN];
					if (wordCountVal > maxVal){
						maxVal = wordCountVal;
						}
					}
				}
				if (c == EOF){
					done = 1;
					}

				} 
	
				else{

					if (inspace == 1 || firstLetter == 1){

						wordLen = 0;
						firstLetter = 0;
						inspace = 0;
						}

					++wordLen;
					}
						
				}
				for (wordCountVal = maxVal; wordCountVal > 0; wordCountVal--){
					printf("%4d | ", wordCountVal);
			
					for(arrayIndexID = 0; arrayIndexID <= MAXWORDLEN; arrayIndexID++){
						if(lengthArray[arrayIndexID] >= wordCountVal){
							printf("*   ");
							}

						else {
							printf("    ");
							}
						}
						printf("\n");
					}
					printf("     +");
		
				for(arrayIndexID = 0; arrayIndexID <= MAXWORDLEN; arrayIndexID++){
					printf("---");
				}
				
				printf("\n     ");
	
				for (arrayIndexID = 0; arrayIndexID < MAXWORDLEN; arrayIndexID++){
					printf("%2d ", arrayIndexID + 1);
				}
	
				printf(">%d\n", MAXWORDLEN);
				return 0;

}

			
					






































