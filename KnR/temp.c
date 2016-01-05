#include <stdio.h>


int main(){

	int c;
	int charCount;
	charCount = 0;
	
	while ((c = getchar()) != EOF){

		if (c != ' ' || c != '\b' || c != 'n'){
			++charCount;
			}
		}		
		printf("the total number of characters = %d\n", charCount);
return 0;
}
