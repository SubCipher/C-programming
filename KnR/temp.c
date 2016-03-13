#include <stdio.h>

int main(void){

	int c;
	c = getchar();
	int i;
	for(i = 0; i < 26; ++i)
	{
		printf("\n alphaNumeric value = %c, %d", c, c);
		c = ++c;
	}
return 0;

}