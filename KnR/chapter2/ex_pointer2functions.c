#include <stdio.h>
#include <string.h>


	int myFancyStrLen(char* str)
	{
		printf("Please standby, I need a Cray for this...\n");
	return strlen(str);

	}


int main(int argc, char* argv[])
{
	char* greet = "hello";
	int (*myFunPtr)(char*); //declare

	myFunPtr = myFancyStrLen; //assign

	int i = (*myFunPtr)(greet); // invoke
	printf("%d \n",i);

	return 0;
}
