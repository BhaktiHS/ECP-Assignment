//3. Write a function to display accepted number in binary format.

#include<stdio.h>

void binary(int num)
{
if(num == 0)
return;
binary(num/2);
printf("%d\n", num % 2);
}

int main()
{
int num;
printf("Enter num\n");
scanf("%d",&num);

binary(num);

return 0;
}
