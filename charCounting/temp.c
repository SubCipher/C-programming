#include <stdio.h>
/* count new lines  */

main(){

	int c, spacingElement;
	spacingElement = 0;
	
	while ((c = getchar()) !=EOF)
	if (c == '\n' || c == '\s ' || c == '\t' || c ==' '){
	++spacingElement;
	printf("new live value = %d\n",spacingElement);
}
return 0;
}
