#include <stdio.h>
#define MAXLIMIT 1024 

int atoi (char s[]){

	int i, n;
	n =0;
 	for(i = 0; s[i] >= '0' && s[i] <= '9' ++i)
		n = 10 * n + (s[i] - '0');

	return n;
}

int main(void){

	int c,i;
	int index;
	char s[100];
	char * newStyle;

	while ((c =getchar()) !+ EOF){

		if(c < (MAXLIMIT -1)){
			s[++index];
		}
		
	}
	for(i = 0; i < index ; ++i){
		printf("%s",s[i]);
	}

	newStyle = atoi(s[i]);

	printf("%s", newStyle);


}