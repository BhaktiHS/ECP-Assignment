//WAP to find max of 2 nos, a. if-else, b.conditional operator

#include<stdio.h>
void main()
{
int num1,num2;
printf("Enter numbers :");
scanf("%d%d",&num1,&num2);
/*
if(num1>num2)
printf("%d is greater than %d\n",num1,num2);
else
printf("%d is greater than %d\n",num2,num1);
*/

(num1>num2)?printf("%d is greater than %d",num1,num2):printf("%d is greater than %d",num2,num1);

}
