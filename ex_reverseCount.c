#include <stdio.h>


int main(void){
	int number, right_digit;

	printf("Enter your number:");
	scanf("%i",&number);

	while( number != 0){
		right_digit = number % 10;
		printf("\n %i",right_digit);

		number /= 10;
		}
	


	return 0;
}