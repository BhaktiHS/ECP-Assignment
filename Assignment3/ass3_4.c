//4. Write a program to find factorial of given number.
#include<stdio.h>
int main()
{
int num = 5,fact=1;
int orig = num;
while (num > 0)
{
fact = fact * num;
if(num != 0)
{
printf("%d ",num);
}
--num;
printf("*");
}
printf("\b= %d\n",fact);
return 0;
}
