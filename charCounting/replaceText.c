#include <stdio.h>
/* count spaces and replace text */

main(void){

int c;
int s,t,nl;
s = t = nl = 0;

while ((c = getchar()) != EOF){
	if (c =='\n')
	++nl;
	if (c =='\t')
	++t;
	if (c ==' ')
	++s;
}
	printf("\nblank space =%d\n tabs= %d\n new lines = %d\n",s,t,nl);
	return 0;
}
