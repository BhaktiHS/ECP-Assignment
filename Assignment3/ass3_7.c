/*7. Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24*/

#include <stdio.h>

int main() 
{
int num,i = 1;

printf("Enter a number: ");
scanf("%d", &num);

while (i * i <= num)
{
if (num % i == 0) 
{
int temp = num / i;
printf("%d * %d = %d\n", i, temp, num);
}
i++;
}
return 0;
}
