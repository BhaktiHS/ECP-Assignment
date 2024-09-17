/*6. Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12*/

#include <stdio.h>

int main() 
{
int num,i=1;
printf("Enter number:");
scanf("%d",&num);
while(i<num)
{
if(num % i ==0)
{
printf("%d ",i);
}
num/2;
i++;
}

    return 0;
}

