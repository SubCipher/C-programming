#include <stdio.h>

int main(int argc, char* argv[])
{
	char greeting[6] = {'h','e','l','l','o'};
	char farewell[] = {"bye!"};

	char* str1 = greeting;
	char* str2 = &greeting[3];

	printf("%s\n", greeting); //ans: hello
	printf("%s\n", str1); //ans hello

	printf("%s\n", str2); // l or ascii equv
	
	printf("size of greeting is %d\n", sizeof(greeting)); //6
	printf("size of farewell is %d\n", sizeof(farewell)); //4

	printf("size of str1 is %d\n", sizeof(str1));// 7
	printf("size of str2 is %d\n", sizeof(str2)); // 2
	printf("size of &greeting[3] is %d\n", sizeof(&greeting[3])); //2
}