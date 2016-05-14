#include <stdio.h>

int main(){


	int c;
	while((c = getchar()) < 'z'){
		++c;
		printf("%c",c);
	}	
	return 0;
}	
			
