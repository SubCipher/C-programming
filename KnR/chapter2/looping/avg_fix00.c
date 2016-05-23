#include <stdio.h>

int main(void){

   int i ,valsRead, numOfValues = 0, values, total=0;
	float average;

	valsRead = scanf("%d",&values);
	while(valsRead > 0 ){
		if(values < 0){
			printf("enter a non-neg number");
			valsRead = scanf("%d", &values);
			continue;
		}
		numOfValues++;
		total += values;
		printf("enter a value: ");
		valsRead = scanf("%d",&values);
		}
	average = total / numOfValues;
	printf("the number of values given %d, and the average is %f", numOfValues, average);


	return 0;

	

}