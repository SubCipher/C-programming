#include <stdio.h>

#include <limits.h>


int main(void){

printf("\n\n\n ***** CHAR *****\n\n");
printf("Bits used for type CHAR: %lu\n",8*sizeof(char));
printf("Bytes used for type char: %lu\n",sizeof(char));
printf("Maximum value range of type char: %d\n", CHAR_MAX);
printf("Minimum value range of type char: %d\n\n",CHAR_MIN);


printf("***** UNSIGNED CHAR *****\n\n");
printf("Bits used for signed char: %lu\n",8 *sizeof(signed(char)));
printf("Bytes used for signed char: %lu\n",sizeof(signed(char)));
printf("Maximum value range of signed char: %d\n", SCHAR_MAX);
printf("Minimum value range of signed char : %d\n\n", SCHAR_MIN);


printf("***** UNSIGNED CHAR value range*****\n");

printf("Bytes used for type (unsigned)char: %d\n\n",UCHAR_MAX);


printf("***** type short (short)int*****\n\n");
printf("Bits used for type short: %lu\n",8*sizeof(short));
printf("Bytes used for type short: %lu\n",sizeof(short));
printf("Maximum value range of type short: %d\n", SHRT_MAX);
printf("Minimum value range of type short: %d\n", SHRT_MIN);

printf("*****Unsigned short*****\n");
printf("Maximum value range of type unsigned short: %u\n\n",(unsigned) USHRT_MAX);



printf("***** Type INT_MAX / MIN *****\n\n");
printf("Maximum value range of type int: %d\n", INT_MAX);
printf("Minimum value range  of type int: %d\n\n", INT_MIN);

printf("***** UNSIGNED int *UINT_MAX *****\n\n");
printf("Maximum value range of type unsigned int: %u\n\n", UINT_MAX);


printf("*****TYPE long *****\n\n");
printf("Bits used for type long: %ld\n",8*sizeof(long));
printf("Bytes used for type long: %ld\n",sizeof(long));
printf("Maximum value range of type long: %ld\n", LONG_MAX);
printf("Minimum value range of type long: %ld\n\n", LONG_MIN);


printf("***** TYPE unsigned long/ ULONG_MAX *****\n\n");
printf("Maximum value range of type unsigned long: %lu\n\n", ULONG_MAX);

return 0;

}
