#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* function to generate and return random numbers */

int * getRandom( ) {

	static int r[10];
	int i;

/* set the seed */

srand( (unsigned)time( NULL) );

	for (i = 0; i < 10; ++i){
		r[i] = rand();
		printf( "r[%d] = %d\n",i,r[i]);
		}


	for (i = 0; i < 10; i++){
		printf("index[%d] | POINTer address %p | content at address: %d \n",i ,*(&r[i]), r[i]);
	}

 	return r;
}

/* main function to call above defined function */

int main() {

	/* a pointer to an int */

	int *p;
	int i;

	p = getRandom();

	for (i = 0; i < 10; i ++){
		printf(" *p + %d) : %d\n",i, *(p + i));
	}
	
	for (i = 0; i < 10; i++){
		printf("index[%d] | pointer address %p | content at address: %p \n",i ,&p[i], p[i]);
	}
	
	return 0;

}
