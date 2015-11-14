#include <stdio.h>

	/* copy input to out put; 1st version */
	main(){
		int c;
		c = getchar();
		while (c != EOF){
			 putchar(c);
			c = getchar();
	}
}
