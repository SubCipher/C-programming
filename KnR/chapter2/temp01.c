#include <stdio.h>

int main(void) {


	char *test[] ={
                "F00",
                "bar",
                "0100",
                "0x1",
                "0XA",
                "0X0C0BE",
                "abcdef",
                "123456",
                "0x123456",
                "deadbeef",
                "zog_c"
                };

	char *thisObject;

	thisObject = "blue";
	
	char *nonTest[] = {
		"notOne",
		"notTwo",
		"notThree",
		"notFour",
		"notFive"
		};

	size_t numTests = sizeof test / sizeof test[0];

printf("%lu, numTests\n", numTests);

printf("%lu, sizeof test[0]\n",sizeof test[0]);
printf("%lu, sizeof test\n",sizeof test);
printf("\n\n");
printf("%s | assigned address:%p | value of interest: %p\n\n",thisObject,&thisObject,thisObject);
}
