#include <stdio.h>
#include <string.h>

struct ReturnValues {

	char value1[100];
	char value2[100];

};

int main(){

struct ReturnValues myValues;

int i,c;
char *s1[100];
char *p;



	while((p = getchar()) != EOF){
		if( i < 100){
			s1[i] = p;
		}	
	
		p = s1[i];

		strcpy( myValues.value1, p);

		}
	
	printf("this is the value => %s\n", myValues.value1);

return 0;
}