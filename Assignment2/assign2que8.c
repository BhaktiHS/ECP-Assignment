/*8. Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.*/
#include<stdio.h>
int main()
{
int qty,price;
printf("Enter quantuty -");
scanf("%d",&qty);
if(qty > 50 )
{
price = ((5*qty)*15)/100;
price = (5*qty)-price;
printf("price is %d\n",price);
}
else if(qty > 30)
{
price = ((5*qty)*10)/100;
price = (5*qty)-price;
printf("price is %d\n",price);
}
else
{
price = 5 * qty;
printf("price is %d\n",price);
}

return 0;
}
