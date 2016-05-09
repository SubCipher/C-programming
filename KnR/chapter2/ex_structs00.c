#include <stdio.h>
#include <string.h>

struct person {

	char firstName[50];
	char lastName[50];
	char height[5];
	char weight[5];
	};

int main(){

	struct person person1;
	struct person person2;


	strcpy( person1.firstName, "krishna");
	strcpy( person1.lastName, "picart");
	strcpy( person1.height,"60");
	strcpy( person1.weight,"200");

	strcpy( person2.firstName,"User1");
	strcpy( person2.lastName, "User2");
	strcpy( person2.height, "55");
	strcpy( person2.weight, "185");

	printf("the name of person1 is: %s %s\n",person1.firstName, person1.lastName);

return 0;

}