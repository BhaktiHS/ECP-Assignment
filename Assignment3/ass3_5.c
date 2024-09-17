//4. Write a program to find factorial of given number.Output: 1 * 2 * 3 * 4 * 5 = 120

#include<stdio.h>
int main()
{
int num,fact=1,i=1;
int orig = num;
printf("Enter number :");
scanf("%d",&num);

while (i <= num)
{
fact = fact * i;
if(i != 0)
{
printf("%d ",i);
}
i++;
printf("*");
}
printf("\b= %d\n",fact);
return 0;
}
