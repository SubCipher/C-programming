
#include <stdnio.h>
	/* copy input to out put; 1st version */
	main(){
		int c;
		while (c!= EOF) {
			putchar(c);
			c = getchar();
		}
	}
