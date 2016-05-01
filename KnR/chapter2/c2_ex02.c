#include <stdio.h>

#define lim 100

int main(void){

int i = 0;
int c;
char s[lim];
c = getchar();

while(i < (lim -1)){

	if(c != EOF){

		if( c != '\n'){
		//printf("this is true\n\n");
		++i;
		s[i] = c;
		}
	}
}
	int j;
	for( j =0; j < lim-1; ++j){
		printf("the value of s[j] is :%c\n", s[j]);


	}

return 0;

}