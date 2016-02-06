#include <stdio.h>

int main(){

	int i, c;
	int numArray[10];
	int charCount= 0;
	int loopCount = 0 ;	

	for(i=0; i < 10; i++){
		numArray[i] = 0;
		}
	
	while ((c = getchar()) != EOF){
		
		if(c != ' ' || c != '\n'){
			charCount++;
			}

		else if(c == ' ' || c == '\n'){
			numArray[loopCount] = charCount;
			charCount = 0;
			loopCount++;
		}
		}
		for(i =0; i < 10; i++){
			if (numArray[i] > 0){
			printf("array value = %d\n", numArray[i]);
			}	
		}
	return 0;


}
