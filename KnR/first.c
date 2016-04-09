#include <stdio.h>

int main(){

	int i,c;
	
	c = getchar();
	printf("\n");
	while((c = getchar()) != EOF){
	
	if(c != '\n'){
	
		printf("alphaNumeric value = %c  |  %d\n", c, c);
		++c;
		}

	}
return 0;

}