#include <stdio.h>
/* count new lines  */

main(){

	int c, nl;
	nl = 0;
	while ((c = getchar()) !=EOF)
	if (c == '\n'){
	++nl;
	printf("new live value = %d\n",nl);
}
return 0;
}
