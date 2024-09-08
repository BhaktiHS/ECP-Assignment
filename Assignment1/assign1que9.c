//WAP to convert temp from celsius to fahrenheit & vice versa

#include<stdio.h>
void main()
{

int val,cel,far;
typedef enum menu{Exit=0,celsius,fahrenheit}MENU;
MENU temp;
do
{
printf("Enter temp value you want to converted -\n");
scanf("%u",&val);
printf("Enter your choice:0.Exit\n 1.celsius to fahrenite\n 2.fehrenite to celsius\n");
scanf("%u",&temp);
switch(temp)
{
case celsius: cel = (((val-32)*5)/9);
              printf("%u value in fahrenite = %u\n",val,cel);
			  break;

case fahrenheit: far = ((9*val)/5)+32;
              printf("%u value in fahrenite = %u\n",val,far);
			  break;
default	: printf("Invalid choice\n");
          break;
case Exit: printf("Bye");
           break;
}
}while(temp!=0);
}
