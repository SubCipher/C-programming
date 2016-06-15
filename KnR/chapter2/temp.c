#include <stdio.h>


int main(){

	char baseText[10]= "krishna";
	char baseCompare[10] ="picart";
	char baseResult[10] = "blue";

	char *arrayPtr1[10];
	char *arrayPtr2[10];
	char *arrayPtr3[8];

	*arrayPtr1 = baseText;
	*arrayPtr2 = baseCompare;
	*arrayPtr3 = baseResult;

	*arrayPtr1 = *arrayPtr3;

	printf("\n\n");
	printf("name: %s",*arrayPtr2);
	printf("\n\n");

	int i;
	char holdText;
	for(i =0; i <10; i++){
		holdText = baseText[i];
		baseText[i] = 'x';
		
		printf("newBase: %s\n",baseText);
		baseText[i] = holdText;
		}	
	


return 0;

}	


