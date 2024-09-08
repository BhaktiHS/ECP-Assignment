//WAP to find max of 3 numbers
#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("Enter 3 numbers :");
scanf("%d%d%d",&n1,&n2,&n3);

(n1>n2)?(n1>n3)?printf("%d is greater",n1):printf("%d is greater",n3):(n2>n3)? printf("%d is greater",n2):printf("%d is greater",n3);

}
