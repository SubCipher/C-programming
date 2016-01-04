#include <stdio.h>


int main(){


	int c, d;
	

	while ((c = getchar()) != EOF){

		if (c == ' ' ) {
			putchar('\\');
			putchar('b');
			d = 1;
			}
		if (c == '\t') {
			putchar('\\');
			putchar('t');
			d = 1;
			}
		if (c == '\n'){
			putchar('\\');
			putchar('n');
			d = 1;				
		}	

		if (d == 0)
			putchar(c);
			
	}
	return 0;
}
			
			
