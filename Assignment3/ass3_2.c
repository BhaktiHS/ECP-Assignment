//2.Write a program to print table of given number.

#include<stdio.h>
int main()
{
int num = 2;
int cnt=1;
while(cnt <= 10)
{
printf("%d * %d = %d \n",num,cnt,(cnt*num));
++cnt;
}
return 0;
}
