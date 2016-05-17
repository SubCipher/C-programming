#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){

printf("***** DATA TYPE: SIGNED CHAR *****\n\n");
printf("Bits used for signed char: %lu\n",8 *sizeof(signed(char)));
printf("Bytes used for signed char: %lu\n",sizeof(signed(char)));
printf("Maximum value range of signed char: %d\n", SCHAR_MAX);
printf("Minimum value range of signed char : %d\n\n", SCHAR_MIN);

printf("*********************** DATA TYPE: UNSIGNED CHAR ************************\n\n");
printf("Bits used for unsigned char: %lu\n",8*sizeof(unsigned(char)));
printf("Bytes used for unsiged char: %lu\n", sizeof(unsigned(char)));
printf("Max value for (unsigned)char (UCHAR_MAX): %d\n\n",UCHAR_MAX);

printf("************************ DATA TYPE: INT *****************************\n\n");
printf("BIts used for signed int: %lu\n",8*sizeof(signed(int)));
printf("Bytes used for signed int: %lu\n\n\n", sizeof(signed(int)));
printf("Maximum value range of type signed int: %d\n", INT_MAX);
printf("Minimum value range  of type signed int: %d\n\n", INT_MIN);

printf("*************************** DATA TYPE: UNSIGNED int ***************************\n\n");

printf("BIts used for unsigned int: %lu\n",8*(sizeof(unsigned(int))));
printf("BIts used for unsigned int: %lu\n", sizeof(unsigned (int)));
printf("Maximum value range of type unsigned int: %u\n\n", UINT_MAX);


printf("************************* DATA TYPE: (short)int ***********************\n\n");
printf("Bits used for short: %lu\n",8*sizeof(short));
printf("Bytes used for short: %lu\n",sizeof(short));
printf("Maximum value range of type short: %d\n", SHRT_MAX);
printf("Minimum value range of type short: %d\n", SHRT_MIN);

printf("*************************** DATA TYPE: Unsigned short ******************************\n");
printf("Maximum value range of type unsigned short: %u\n\n",(unsigned) USHRT_MAX);

printf("**************************** DATA TYPE long *******************************************\n\n");
printf("Bits used for type long: %ld\n",8*sizeof(long));
printf("Bytes used for type long: %ld\n",sizeof(long));
printf("Maximum value range of type long: %ld\n", LONG_MAX);
printf("Minimum value range of type long: %ld\n\n", LONG_MIN);

printf("***** TYPE unsigned long/ ULONG_MAX *****\n\n");
printf("Maximum value range of type unsigned long: %lu\n\n", ULONG_MAX);


printf("************************************** DATA TYPE: Float **********************************\n\n");
printf("Bits used for unsigned Float %lu\n",8*(sizeof(float)));
printf("Bytes used for unsigned Float %lu\n",sizeof(float));
 


printf("**************************   DATA TYPE Unsigned Double **********************************\n\n");
printf("Bits used for unsigned double %lu \n",8*(sizeof(unsigned(double)))); 
printf("Bytes used for unsigned double %lu \n",sizeof(unsigned(double)));


printf("********************************    DATA TYPE: Signed Double    ******************************\n\n");
printf("Bits used for signed double %ld\n", 8*(sizeof(signed(double))));
printf("Bytes used for signed double %ld\n", sizeof(signed(double)));




return 0;

}



