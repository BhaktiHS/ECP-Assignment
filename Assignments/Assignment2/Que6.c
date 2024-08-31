//WAP to accept 5 digit no & check if it is palindrome.
#include<stdio.h>
void main()
{
int n,temp,rem,rev=0;
printf("Enter 5 digit number:");
scanf("%d",&n);
temp = n;

while(temp!=0)
{
rem = temp%10;
rev = rev*10+rem;
temp = temp/10;
}
printf("%d is palindrome",num);
}
