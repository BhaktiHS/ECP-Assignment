//3.Write a program to accept a number and c. Check whether given number is numeric palindrome or not

#include<stdio.h>

int main()
{
int num,orig,rev=0,temp;
printf("Enter number: ");
scanf("%d",&num);
orig = num;
while(num > 0)
{
temp = num % 10;
rev = rev * 10 + temp;
num = num / 10;
}
if(rev == orig)
{
printf("%d is a palindrome\n",orig);
}
else
{
printf("%d is not a palondrome\n",orig);
}
return 0;
}
