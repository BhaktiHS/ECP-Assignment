// 1. Write a function to count number of ‘1’ bits into a given number.

#include<stdio.h>

int count(char num)
{
int cnt = 0;
for(unsigned char i = 0x01; i != 0; i<<1)
{
if(num & i)
++cnt;
}
return cnt;
}

int main()
{
char num = 3;
printf("No of 1s in 3 = %d",count(num));
return 0;
}
