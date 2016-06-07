#include <stdio.h>

const int MAX = 4;

int main () {

	int var[] = {10, 100, 200};
	int i;
	printf("\n\nArray Of Values\n\n");
	for(i =0; i < MAX; i++){
		printf("var[%d] | assigned address: %p  | contents of address:%d \n",i,&var[i],var[i] );
	}

	printf("\n\n");

	/*array of pointers to an integer*/

	printf("Array Of Pointers To An Integer\n\n");
	int *ptrVar[MAX];

	for(i = 0; i < MAX; i++){
		ptrVar[i] = &var[i]; //assign the addresses of the integers

		}

	for(i =0; i < MAX; i++){
		printf("var[%d] | assigned address %p | contents of address = %p \n",i,&ptrVar[i], ptrVar[i]);

		}

	/* array of pointers to character to store list of strings */

	printf("\n\n");
	printf("Array of Pointers to char to store a list of stings");
	printf("\n\n");
	char *names[] = {
		"Superman, DC comics    ",
		"Batman, DC comics      ",
		"Thor, Marvel comics    ",
		"Punisher, Marvel comics",
		};
	for( i =0; i < MAX; i++){
		printf("A--Names[%d] | assigned address: %p | contents of address: %s \n",i,&(*names[i]),names[i]);
		}
	
	printf("\n\n");
	for( i =0; i < MAX; i++){
		printf("B--names[%d] | (pointer) assigned address: %p | contents of address: %p \n",i,&names[i],names[i] );

		}
	printf("\n\n");
	
	return 0;

	}

