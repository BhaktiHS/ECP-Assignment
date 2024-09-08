//WAP to accept 2 numbers & display division of the 2 numbers. check for divide by 0 error

#include<stdio.h>
void main()
{
int num1,num2;
float div;
printf("Enter 2 numbers :");
scanf("%d %d",&num1,&num2);
if(num2 != 0)
{
div = num1/num2;
printf("Division = %f\n",div);
}
else
{
printf("Entered divisor is 0, can't perform division\n");
}
}
