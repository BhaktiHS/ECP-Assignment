/*1. Write a program to demonstrate use of string library functions.
b. strcpy()*/

#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20];
printf("Enter string1 - ");
scanf("%[^.]s",str1);
printf("str1 = %s\n",str1);
strcpy(str2,str1);
printf("str2 = %s\n",str2);
return 0;
}
