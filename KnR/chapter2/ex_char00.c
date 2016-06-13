#include <stdio.h>


int main(){

	char baseText[10]= "krishna";

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
	
