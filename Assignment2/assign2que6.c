//WAP to accept 5 digit no & check if it is palindrome.
#include<stdio.h>
void main()
{
int num,temp,rem,rev=0;
printf("Enter 5 digit number:");
scanf("%d",&num);
temp = num;

while(temp!=0)
{
rem = temp%10;
rev = rev*10+rem;
temp = temp/10;
}
if (num == rev)
printf("%d is a palindrome\n",num);
else 
printf("%d is not a palindrome\n",num);
}
