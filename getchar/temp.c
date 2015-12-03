#include <stdio.h>

main(){
	int c;
	int d;

	printf("the value of EOF %d \n", EOF);

	printf("\nthe value  (c = getchar()) != EOF) is %d \n",(c = getchar()) != EOF);
	printf("\nthe value  d  = getchar() != EOF is %d\n",d = getchar() != EOF);
	
	printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
	printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);	

return 0;
}

