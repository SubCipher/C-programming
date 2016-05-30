#include <stdio.h>

int main(void){


	int i=0,c;
	char s0[100];

	while((c = getchar()) != EOF){
		s0[i] = c;
		++i;
		}
	for(i=0; i < 30; i++){
	printf("value at s0 index %d = %c located at %p\n",i,s0[i],&s0[i]);
	}
return 0;

}		
		
