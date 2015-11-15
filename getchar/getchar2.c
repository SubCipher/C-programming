#include <stdio.h>

main(){

printf ("Press enter to continue: ");
	char c=getchar();
	while (c !='\n' && c != EOF)
	c = getchar();
}
