#include <stdio.h>

int main(void){
/*declare and initialize*/

int num = 42;
int* numPtr= &num;

/* initialize only
num =42;
numPtr = &num; //compute memory address space as a reference to "num" and store it in numPtr
*/

printf("memory address reference= %p\nlocal value assigned to num=%d\n",&numPtr,num);

return 0;
}
