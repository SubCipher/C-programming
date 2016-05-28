#include <stdio.h>

int main(){

	/*a pointer is a memory address*/

int x =10;
int *p = &x;

printf("%d is the value of x and %p is the memory address of x",x, p);

return 0;
}