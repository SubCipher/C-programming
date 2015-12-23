#include <stdio.h>


int main(void)
	{

	int c;	
	c = getchar();

	if ((c != EOF) == 0 )
	printf("the value of EOF is 0\n");

	if (( c != EOF) == 1)
	printf("the value of EOF is 1\n");

	
	return 0;
}
