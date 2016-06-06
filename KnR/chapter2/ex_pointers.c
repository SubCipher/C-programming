#include <stdio.h>


int main(void){

	int var1;
	char var2[10];

	printf("\n");
	printf("sizeof(&var1) in bits: %lu. Memory address of var1: %p\n", sizeof(&var1),&var1 );
	printf("sizeof(&var2) in bits: %lu. Memory address of var2: %p\n", sizeof(&var2),&var2 );	
	

	printf("\n\n");

	var = 20; /*actual variable declaration*/
	int *ip; 		/*pointer variable declaration*/

	ip = &var; /*store address of var in a pointer variable */


	printf("Address of var variable %p\n\n",&var );

	/*address stored in pointer variable*/
	printf("address stored in ip variable: %p\n\n",ip );


	/*access the value using the pointer*/
	printf("value of *ip variable: %d\n",*ip );

	printf("\n\n");
	printf("value of &ip variable (or the address used by the pointer itself: %p\n\n",&ip );



	return 0;



}