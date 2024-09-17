//2. Write a function to display given number in binary format.

#include<stdio.h>

void binary(int num)
{
if(num == 0)
return;
binary(num/2);
printf("%d", num % 2);
}

int main()
{
int num = 127;
binary(num);

return 0;
}
