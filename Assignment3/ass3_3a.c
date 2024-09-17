/*3.Write a program to accept a number and
a. Calculate sum of digits of integer*/

#include<stdio.h>

int main()
{
int num,sum=0,temp;
printf("Enter number : ");
scanf("%d",&num);

while (num > 0)//1234>0,123>0
{
temp = num % 10;//t = 1234%10 =4
sum = sum + temp;//sum =4 
num = num / 10;// 1234/10=123,

if(num != 0)
{
printf("%d + ",temp);
}
}
printf("%d",temp);
printf(" = %d\n",sum);
return 0;
}

