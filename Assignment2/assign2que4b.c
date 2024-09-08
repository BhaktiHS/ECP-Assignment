//WAP to find max of 2 nos, b. conditional operator

#include<stdio.h>
void main()
{
int num1,num2;
printf("Enter numbers :");
scanf("%d%d",&num1,&num2);

(num1>num2)?printf("%d is greater than %d\n",num1,num2):printf("%d is greater than %d\n",num2,num1);
}
