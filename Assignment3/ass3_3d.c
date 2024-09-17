/*3.Write a program to accept a number and d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)*/

#include<stdio.h>
#include<math.h>
int main()
{
int num,temp,temp2,res=0,cnt=0;
printf("Enter number :");
scanf("%d",&num);
int orig = num;

temp2 = orig;
while (temp2 != 0)
{
temp2 = temp2 / 10;
cnt++;
}
while(num > 0)
{
temp = num % 10;
res += (int)pow(temp,cnt);
num = num / 10;
}
if(res == orig)
{
printf("%d is an armstrong number\n",orig);
}
else
{
printf("%d is not an armstrong number\n",orig);
}
return 0;
}
