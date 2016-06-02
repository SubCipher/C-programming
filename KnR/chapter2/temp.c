#include <stdio.h>
#include <string.h>


int main(void){


	char word1[3]= "One";
	printf("%s",word1);

	int numbers[] = {16,17,18,19,20};
	/* //alternative	
	numbers[0] = 16;
	numbers[1] = 17;
	numbers[2] = 18;
	numbers[3] = 19;
	numbers[4] = 20;
	*/
	int i,j;
	for(i =0; i < 5; i++){
		printf("array index: %d | value: %d | sizeof: %lu | memory location: %p \n", i, numbers[i],sizeof(numbers[i]), &numbers[i]);
		}

	char c[] = "hello world\n ";
	printf("%s\n",c);

	for(i =0; i < strlen(c); i++){
		printf("array index %d | value: %c | sizeof: %lu | memory location: %p \n", i, c[i], sizeof(c[i]),&c[i]);
	}		
	
	char* my_2Darray[8][8];
	my_2Darray[5][0] = "hello world";
	printf("my 2D array");
	
	for(j =0; j < 6; j++){
		for(i =0; i < 6; i++){
			printf("2D array index %d|%d | value %s | sizeof: %lu | memory address: %p\n",j,i,my_2Darray[j][i],sizeof(my_2Darray[j][i]),&my_2Darray[j][i]);
		}
}

return 0;

}
