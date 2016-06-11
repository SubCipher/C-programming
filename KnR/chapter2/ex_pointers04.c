#include <stdio.h>


int main(){

	int a = 1;
	int b = 2;
	int c = 3;

	int* p;
	int* q;

	p = &a;
	q = &b;


	 p = q;
	*p = 13;

	
	printf("expression: int a = 1; | value = %d\n\n",a);
	printf("expression: int b = 2; | value = %d\n\n",b);
	printf("expression: int c = 3; | value = %d\n\n",c);
	printf("expression: p = &a | value = %p\n\n",p);
	printf("expression: q = &b | value = %p\n\n",q);
	printf("expression: p = q  | value = %p\n\n",p);
	printf("expression: *p = 13 |value = %d\n\n",b);

return 0;


}