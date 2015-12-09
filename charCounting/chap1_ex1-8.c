#include <stdio.h>
/* count blanks, new lines and tabs  */

main(){

	int c, spacingElement;
	spacingElement = 0;
	
	while ((c = getchar()) !=EOF)
	if (c == '\n' || c == '\t' || c ==' '){
	++spacingElement;
	printf("new live value = %d\n",spacingElement);
}
return 0;
}
