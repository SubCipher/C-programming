#include <stdio.h>

int main(void){

	int c = 0;
	int i;	


//	int* abcPtr = &c;
		
	for(i =0; i < 'z'; i++ ){
		int* abcPtr = &c;
		printf("asci value = %c\nstored memory reference= %p\n",c,abcPtr);
		c++;
		}
return 0;
} 

