//WAP to accept num & check +ve,-ve,0

#include<stdio.h>
void main()
{
int num;
printf("Enter number :");
scanf("%d",&num);
if(num > 0)
{
printf("Number is positive\n");
}
else if(num < 0)
{
printf("Number is negative\n");
}
else
{
printf("Number is zero\n");
}
}
