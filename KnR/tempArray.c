#include <stdio.h>

int main(){

	int i, c;
	int numArray[10];
	
	while ((c = getchar()) != EOF){
		
		for(i = 0; i < 10; i++){
			numArray[i] = c++;

		printf("numArray %d\n", numArray[i]);

		}	
	}

}
