#include <stdio.h>
/*
changeName(char *aName){

	char newName[] ="Picart";
	*aName = *newName;


}	
*/
int main(){
	char name[12]= "krishna";
	char newName[12] ="picart";

	*name = *newName;

	printf("\n\n");	
	printf("%s",name);
	printf("\n\n");	

}

