#include <stdio.h>

int main(){

	int i, c;
	int numArray[10];
	c = 0;
	for(i = 0; i < 10; i++)
		numArray[i] = 0;
	
	while ((c = getchar()) != EOF){
		
		for(i = 0; i < 10; i++){
			numArray[i] = c++;
		printf("\n numArray %d\n", numArray[i]);
		}
	}

}
