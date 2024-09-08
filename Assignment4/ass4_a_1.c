//1. Write a function to calculate factorial of a given number.

#include<stdio.h>

int fact(int num);

int main()
{
int num = 5;
printf("%d! = %d\n",num,fact(num));
return 0;
}

int fact(int num)
{
int res = 1,i;
for (i=1;i<=5;i++)
{
 res = res *i;
}
return res;
}
