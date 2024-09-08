 /*Write a program to determine the ranges of char, short, int, and long variables, both signed and
unsigned, by printing appropriate values from standard headers.
Do not use spaces to align table columns.12. Extend above program (11) to print ranges for float, double, and long double. Use <float.h>.
“float” numbers can be printed using %f, %g, %e, %E. */
  
  #include<stdio.h>
  #include<limits.h>
  #include<float.h>
  
  int main()
 {
 printf("Data Type\t\tSize\tFormat Specifier\tRange\n");
 printf("Char\t\t\t%ld\t%%c\t\t%d to %d\n",sizeof(char),CHAR_MIN,CHAR_MAX);
 printf("Unsigned char\t\t%ld\t%%c\t\t0 to %d\n",sizeof(unsigned char),UCHAR_MAX);
 printf("Short int\t\t%ld\t%%hd\t\t%d to %d\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
 printf("Unsigned short int\t%lu\t%%hu\t\t0 to %d\n",sizeof(unsigned short int),USHRT_MAX);
 printf("Int\t\t\t%ld\t%%d\t\t%d to %d\n",sizeof(int),INT_MIN,INT_MAX);
 printf("Unsigned int\t\t%ld\t%%u\t\t0 to %u\n",sizeof(unsigned int),UINT_MAX);
 printf("Long int\t\t%ld\t%%ld\t\t%ld to %ld\n",sizeof(long int),LONG_MIN,LONG_MAX);
 printf("Unsigned long int\t%ld\t%%lu\t\t0 to %lu\n",sizeof(unsigned long int),ULONG_MAX);

 printf("Float\t\t\t%ld\t%%g\t\t%f to %g\n",sizeof(float),FLT_MIN,FLT_MAX);
 printf("Double\t\t\t%ld\t%%g\t\t%f to %g\n",sizeof(double),DBL_MIN,DBL_MAX);
 printf("Long double\t\t%ld\t%%Lg\t\t%Lf to %Lg\n",sizeof(long double),LDBL_MIN,LDBL_MAX);
 return 0;
 }  
