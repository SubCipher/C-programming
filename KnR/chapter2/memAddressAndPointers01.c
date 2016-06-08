#include <stdio.h>

int my_array[] = {1,23,17,4,-5,100};
int *ptr;

int main(void){
	int i;
	ptr = &my_array[0]; 		/* point to first element of array */


	printf("Ex: A: \n\n");
	for( i =0; i < 6; i++){
		printf("my_array[%d] = %d   	",i,my_array[i]); /*<--A */
	//	printf("ptr + %d = %d \n",i, *(ptr + i));	/*<--B */
}	

printf("Ex: B\n\n");
	for( i =0; i < 6; i++){
		printf("my_array[%d] = %d   	",i,my_array[i]); /*<--A */
//		printf("ptr + %d = %d \n",i, *ptr++);
	}
printf("Ex: C \n\n");
	for( i =0; i < 6; i++){
		printf("my_array[%d] = %d   	",i,my_array[i]); /*<--A */
		printf("ptr + %d = %d \n",i, *(++ptr));

		}
	return 0;
	}
	
