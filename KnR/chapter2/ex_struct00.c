#include <stdio.h>
#include <string.h>

struct ReturnValues {

	char value1[100];
	char value2[100];

};

int main(){

struct ReturnValues myValues;

int i,c;

	while((c = getchar()) != EOF){
		if( i < 100){
			strcpy( myValues.value1, c);
//		++i;
		}
	}
	printf("%s\n", myValues.value1);

return 0;
}