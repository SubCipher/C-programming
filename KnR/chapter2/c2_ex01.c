#include <stdio.h>

#include <limits.h>


int main(void){
printf("\n\n");
printf("Bits used for type unsigned char: %lu\n", 8* sizeof(unsigned(char)));
printf("Bytes used for type unsigned char: %lu\n",sizeof(unsigned (char)));
printf("maximum numeric value of unsigned char: %u \n\n",(unsigned) UCHAR_MAX);

printf("Bits used for signed char: %lu\n",8 *sizeof(signed(char)));
printf("Bytes used for signed char: %lu\n",sizeof(signed(char)));
printf("Maximum numeric value of signed char: %d\n", SCHAR_MAX);
printf("Minimum numeric value of signed char : %d\n\n", SCHAR_MIN);


printf("Bits used for type signed short: %lu\n",8*sizeof(short));
printf("Bytes used for type signed short: %lu\n",sizeof(short));
printf("Maximum value of type signed short: %d\n", SHRT_MAX);
printf("Minimum value of type signed short: %d\n", SHRT_MIN);

printf("Maximum numeric value of type unsigned short: %u\n\n",(unsigned) USHRT_MAX);

printf("Maximum numeric value of type signed int: %d\n", INT_MAX);
printf("Minimum numeric value of type signed int: %d\n\n", INT_MIN);

printf("Maximum numeric value of type unsigned int: %u\n\n", UINT_MAX);

printf("Maximum numeric value of type signed long: %ld\n", LONG_MAX);
printf("Minimum numeric value of type signed long: %ld\n\n", LONG_MIN);

printf("Maximum numeric value of type unsigned long: %lu\n\n", ULONG_MAX);

printf("Bits used for type float: %lu\n",8*sizeof(float));
printf("Bytes used for type float: %lu\n\n",sizeof(float)); 

printf("Bits used for type double: %lu\n", 8*sizeof(double));
printf("Bytes used for type double: %lu\n\n",sizeof(double));

printf("Bits used for type long double: %lu\n",8*sizeof(long(double)));
printf("Bytes used for type long double: %lu\n\n",sizeof(long(double)));


return 0;

}



