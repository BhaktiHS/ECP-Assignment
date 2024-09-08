/*1. Write a program to demonstrate use of string library functions.
. strcat()*/

#include<stdio.h>
#include<string.h>
int main()
{
char str1[20] = "Good",str2[20] = "Morning";
/*
printf("Enter string1 - ");
scanf("%[^.]s",str1);

printf("Enter string2 - ");
scanf("%[^.]s",str2);

printf("String1 = %s\n",str1);
printf("String2 = %s\n",str2);
*/
strcat(str1,str2);
printf("string = %s\n",str1);
return 0;
}
