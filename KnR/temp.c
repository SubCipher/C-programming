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
			}

		if (c != ' '){
			inspace = 1;
			putchar(c);
				}
			}
	return 0;
}
			
			
