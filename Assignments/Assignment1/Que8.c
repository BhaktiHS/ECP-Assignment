//WAP to accept 3 integer numbers & find its average 

#include<stdio.h>
void main()
{
int n1,n2,n3,avrg;
printf("Enter 3 numbers :\n");
scanf("%d%d%d",&n1,&n2,&n3);
avrg = (n1+n2+n3)/3;
printf("Average of %d %d %d is %d\n",n1,n2,n3,avrg);
}
