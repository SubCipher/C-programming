#include <stdio.h>

/* find value of the expression getchar() != EOF is O or 1 */
main(){
	int c;
	c = getchar()!= EOF;
	printf("%d\n",c);

	}	
