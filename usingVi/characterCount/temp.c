#include <stdio.h>
main(){
	int a;
	a = getchar();
	while (a < 129 ){
	printf ("%c is the  value of getchar() and %c is the value of putchar()\n",a,putchar(a));
	++a;
}
}
