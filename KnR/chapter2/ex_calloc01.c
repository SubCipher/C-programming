#include <stdio.h>
#include <stdlib.h>
#define MAXLIMIT 25;

int main(){

	int i,n;
	char *a;

	printf("Number of elements to be entered:");
	scanf("%d",&n);

	a=(char*)calloc(n, sizeof(char));
	printf("Enter %d numbers:\n",n);

	for(i=0 ; i < n; i++){
		scanf("%c",&a[i]);
		}

	printf("the numbers entered are:\n");
	for(i=0; i < n; i++){
		printf("%c allocated at %p\n",a[i],&a[i]);
		}
	free(a);
	return(0);
}

