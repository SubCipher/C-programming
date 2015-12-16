#include <stdio.h>
/* count spaces and replace text */

main(void){

int c, bs,nl,t ;
while ((c = getchar()) != EOF){
	if (c ==' ')
	++bs;
	if (c =='\n')
	++nl;
	if (c =='\t')
	++t;
}
	printf("%d, %d, %d", bs,nl,t);

}
