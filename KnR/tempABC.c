#include <stdio.h>

int main(){

	int c;
	c = getchar();

	while ( c  < 'z'+1){
	
	printf("\n the ascii value of %c is %d",c,c);
	++c;
	if (c > 'z'){
	printf("\n");
	}
	}

	
}
