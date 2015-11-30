#include <stdio.h>

main(){

	printf("Press Enter to continue: ");
	c=getchar();
	while (c != EOF)
	printf("%d\n",c);
	c = c +1;

}	
