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

	for(i=0; i < n; i++){
		printf("%c",a[i]);
		}
	for(i=0; i< n; i++){

		printf("char =%c | index ID: %d | allocated memory address: %p: \n",a[i],i,&a[i]);
	}
	printf("index result; for a[1] is: %c with memeory alloacation of: %p",a[1],&a[1]);

	free(a);
	return(0);
}

