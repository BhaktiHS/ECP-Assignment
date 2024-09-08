//WAP to accept int & print its table

#include<stdio.h>
void main()
{
int num,a=1,b;
printf("Enter number:");
scanf("%d",&num);
while(a<=10)
{
b = num*a;
printf("%d\n",b);
a++;
}
}
