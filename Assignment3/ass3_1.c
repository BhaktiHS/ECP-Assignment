/*1.Write a program to accept a character and a number, and print the character number times*/

#include<stdio.h>
int main()
{
int num;
char ch;
printf("Enter character to be printed:");
scanf("%c",&ch);
printf("Enter number of times character to be printed: ");
scanf("%d",&num);

while(num > 0)
{
printf(" %c",ch);
--num; 
}
return 0;
}
