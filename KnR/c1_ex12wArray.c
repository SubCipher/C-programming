#include <stdio.h>

main() {
	int c, bp;
	char buffer[1024];

	bp = 0;
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c !='\n') {
		buffer[bp++] = c;
		}
		else if (bp > 0) {
			printf ("%s\n",buffer);
			bp = 0;
			}

		buffer[bp] = '\0';
	}

	if( bp > 0){
		printf("%s\n", buffer);
		}
}


