#include <stdio.h>

int main(void){

	int c;
	int i;
	c = getchar();

	while(c  < 'z' )
	{
		printf("\nalphaNumeric values: %c, %d\n", c,c);
		++c;
	}

return 0;

}