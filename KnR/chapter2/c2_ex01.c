#include <stdio.h>
#include <limits.h>


int main(void){

printf ("\nBits used for type char:  %d\nBytes used for type char: %lu\n", CHAR_BIT, sizeof(char));
printf("Maximum mumeric value of type char: %d\n", CHAR_MAX);
printf("Minimum numeric value of type char: %d\n\n",CHAR_MIN);

printf("Bits used for signed char: %lu\n",8 *sizeof(signed(char)));
printf("Bytes used for signed char: %lu\n",sizeof(signed(char)));
printf("Maximum numeric value of signed char: %d\n", SCHAR_MAX);
printf("Minimum numeric value of signed char : %d\n\n", SCHAR_MIN);


printf("Bits used for type (unsigned)char: %lu:\n",8*sizeof((unsigned)UCHAR_MAX));
printf("Bytes used for type (unsigned)char: %lu\n",sizeof((unsigned)UCHAR_MAX));
printf("Maximum numeric value of unsigned char: %u\n\n", (unsigned) UCHAR_MAX);



printf("Bits used for type short: %lu\n",8*sizeof(short));
printf("Bytes used for type short: %lu\n",sizeof(short));
printf("Maximum value of type short: %d\n", SHRT_MAX);
printf("Minimum value of type short: %d\n", SHRT_MIN);

printf("Maximum numeric value of type unsigned short: %u\n\n",(unsigned) USHRT_MAX);


printf("Bits used for type int: %lu:\n",8*sizeof(INT_MAX));
printf("Bytes used for type int: %lu:\n",sizeof(INT_MAX));

printf("Maximum numeric value of type int: %d\n", INT_MAX);
printf("Minimum numeric value of type int: %d\n\n", INT_MIN);


printf("Bits used for unsigned int: %lu\n",8*sizeof(UINT_MAX));
printf("Bytes used for unsigned int: %lu:\n",sizeof(UINT_MAX));
printf("Maximum numeric value of type unsigned int: %u\n\n", UINT_MAX);


printf("Bits used for type long: %ld\n",8 *sizeof(LONG_MAX));
printf("Bytes used for type long: %ld\n",sizeof(LONG_MAX));
printf("Maximum numeric value of type long: %ld\n", LONG_MAX);
printf("Minimum numeric value of type long: %ld\n\n", LONG_MIN);


printf("Bits used for unsigned long: %ld\n",8 *sizeof(ULONG_MAX));
printf("Bytes used for unsigned long: %lu\n",sizeof(ULONG_MAX));
printf("Maximum numeric value of type unsigned long: %lu\n\n", ULONG_MAX);

return 0;

}



