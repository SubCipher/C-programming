#include <stdio.h>

int main(){


	int c, inspace;
	inspace = 0;

	while ((c = getchar()) != EOF){

		if (c == ' ') {
			if (inspace == 1){
				inspace = 0;
				putchar('\\');
				putchar('b');
				}
			if (c == '\t') {
				putchar('\\');
				putchar('t');
				}
			if (c == '\n'){
				putchar('\\');
				putchar('n');

				}
			}
		if (c != ' ' || c != '\t' || c != '\n'){
				inspace = 1;
				putchar(c);
				}
	
	}
	return 0;
}
			
			
