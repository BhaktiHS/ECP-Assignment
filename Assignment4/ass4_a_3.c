// 3. Write a function to implement four function calculator. Function would take operands and operator as arguments and returns result.

#include<stdio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void add(int a, int b);
int accept_num();

int main()
{
int n1,n2;
n1 = accept_num();
n2 = accept_num();
enum cal{EXIT,ADD,SUB,MUL,DIV}ch;
printf("0.EXIT\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
printf("Enter your choice :");
scanf("%d",(int*)&ch);

switch(ch)
{
case ADD: add(n1,n2);
		  break;

case SUB: sub(n1,n2);
		  break;

case MUL: mul(n1,n2);
		  break;

case DIV: div(n1,n2);
		  break;

case EXIT:printf("Bye\n");
		  break;
default: printf("Invalid choice\n");	
}
return 0;
}

void add(int a, int b)
{
  printf("Add : %d\n",a+b);
}

void sub(int a, int b)
{
  printf("Sub : %d\n",a-b);
}

void mul(int a, int b)
{
  printf("Mul : %d\n",a*b);
}

void div(int a, int b)
{
  printf("Div : %d\n",a/b);
}
int accept_num()
{
int x;
printf("Enter operand :\n");
scanf("%d",&x);
return x;
}
