#include <stdio.h>
#define MAXLIMIT 1024

/* get input */

char *getInput(){
	
	int i ,c;
	char s[MAXLIMIT];

	while(( c = getchar()) != '\n'){
			s[i++] = c;
		}
	return s;	
}



int main(void){

	
	int i;
	char *s;
	getInput();
	
	printf("%s\n",s);


return 0;
	

}
