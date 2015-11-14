#include <stdio.h>
/* counting characters in input */

main(){
	long nc;
	nc = 0;
	while (getchar() != EOF)
	++nc;
	printf("%ld this is where output should be\n",nc);
}


