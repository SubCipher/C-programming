#include <stdio.h>


int main(){
	int aa;
	int a = 1;
	int b = 2;
	int c = 3;

	int* p;
	int* q;

	p = &a;
	q = &b;


	 p = q;
	*p = 13;

	
	printf("expression: int a = 1; | address: %p | value = %d\n\n",&a,a);
	printf("expression: int b = 2; | address: %p | value = %d\n\n",&b,b);

	printf("expression: int c = 3; | address: %p | value = %d\n\n",&c,c);
	printf("expression: int* p;	| address = %p iniValue= %p\n\n",&p,p);
	printf("expression: int* q;	| address = %p iniValue= %p\n\n",&q,q);	
/*
	printf("expression: p = &a | value = %p\n\n",p);
	printf("expression: q = &b | value = %p\n\n",q);
	printf("expression: p = q  | value = %p\n\n",p);
	printf("expression: *p = 13 |value = %p\n\n",p);
*/
return 0;


}
