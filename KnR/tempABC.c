#include <stdio.h>

int main(){

	int aaron;
	aaron = getchar();

	//while ( aaron  !=  'z'+1){
	while (aaron != EOF) {
	printf("\n the ascii value of %c is %d",aaron,aaron);
	++aaron;
	if (aaron > 'z'){
	printf("\n");
	}
	}

	
}
