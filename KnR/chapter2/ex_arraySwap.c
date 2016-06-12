#include <stdio.h>

swap(int *a,int *b){

	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp; 
}
	

int main(){ 

	int scores[10];
	scores[0] = 0;
	scores[9] = 9;

	swap(&(scores[0]),&(scores[9])); 

	printf("%d,%d",scores[0],scores[9]);
 }

