#include <stdio.h>

int main(void) {

	int i, total=0, value, numberOfNums=0;
	float average;

	printf("how many numbers will to read?");
	scanf("%d", &numberOfNums);

	for(i =0; i < numberOfNums; i++){
		scanf("%d", &value);
		total += value;
		printf("%d value read\n", value);
		}

		average = (float) total / (float) numberOfNums;

		printf("we read %d values with an average of %f\n", numberOfNums, average);

 return (0);
}


		
