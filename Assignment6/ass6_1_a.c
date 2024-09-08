/*1. Write a program to demonstrate use of string library functions.
a. strlen()*/

#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
printf("Enter string - ");
scanf("%[^\n]s",str);
int length = strlen(str);
printf("Lenght = %d\n",length);
return 0;
}
