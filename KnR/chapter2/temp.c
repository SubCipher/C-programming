#include <stdio.h>


int main(){

	char baseText[100]= "krishna";
	char baseCompare[100] ="picart";
	char baseResult[100] = "blue";

	char *arrayPtr1[100];
	char *arrayPtr2[100];
	char *arrayPtr3[8];

	*arrayPtr1 = baseText;
	*arrayPtr2 = baseCompare;
	*arrayPtr3 = baseResult;


	*arrayPtr1 = *arrayPtr3;

	printf("\n\n");
	printf("frist name: %s, last name: %s",*arrayPtr1, *arrayPtr2);
	printf("\n\n");


return 0;

}	
	
