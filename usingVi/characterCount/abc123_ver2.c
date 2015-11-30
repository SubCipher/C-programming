#include <stdio.h>
main(){
	int anyChar = getchar();
	while (anyChar <= ('z'+ 4) ){
	printf("%d is the ascii value of %c \n",anyChar,anyChar);
	++anyChar;
}
}
