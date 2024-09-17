//3.Write a program to accept a number and b. Reverse the number

#include<stdio.h>

int main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);

while(num > 0)
{
int temp = num % 10;
printf("%d",temp);
num = num / 10;
}
printf("\n");
return 0;
}
