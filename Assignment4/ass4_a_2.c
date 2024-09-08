//Write a function to calculate power.

#include<stdio.h>

int powr(int base,int res);

int main()
{
int base,expo;
printf("Enter base & exponent to calculate power:\n");
scanf("%d%d",&base,&expo);
printf("Power of %d for exponent %d is : %d\n",base,expo,powr(base,expo));
return 0;
}

int powr(int base,int expo)
{
 int  res = 1;
 for(int i=1;i<=expo;i++)
 {
  res = res * base;
 }
return res;
}
