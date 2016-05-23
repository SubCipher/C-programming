#include <stdio.h>
#include <stdlib.h>

int main(){

	int i,n, sum = 0;
	char *ptr;
	printf("Enter number of elements:  ");
	scanf("%d", &n);
	ptr=(char*)calloc(n,sizeof(char));
	if(ptr==NULL)
	{
		printf("Error! memory memory not allocted.");
		exit(0);
	}

	printf("Enter elements of array: ");
	for(i=0; i < n; ++i)
	{
		scanf("%s",ptr[i]);
	}

	for(i=0; i < n; ++i)
	{
		printf(" %c\n", ptr[i]);
	}
	free(ptr);
	return 0;
} 
