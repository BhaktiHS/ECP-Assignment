//WAP to accept no & print it in char,dec,octhex format
#include<stdio.h>
void main()
{
int num;
printf("Enter the number :");
scanf("%d",&num);
printf("Number in character format:%c\n",num);
printf("Number in decimal format:%d\n",num);
printf("Number in octal format: %o\n",num);
printf("Number in Hexadecimal format:%x\n",num);
}
