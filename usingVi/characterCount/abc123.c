#include <stdio.h>
main(){
	int a;
	a = getchar();
	while (a < 129 ){
	printf ("%d is the  value of getchar() and %d is the value of putchar()\n",a,putchar(a));
	++a;
}
}
