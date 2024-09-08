//WAP to find max of 3 numbers a. if else
#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("Enter 3 numbers :");
scanf("%d%d%d",&n1,&n2,&n3);

if(n1>n2)
{
 if(n1>n3)
 printf("%d is greater\n",n1);
 else
 printf("%d is greater\n",n3);
}
else
{
if(n2>n3)
printf("%d is greater\n",n2);
else
printf("%d is greater\n",n3);
}

}
