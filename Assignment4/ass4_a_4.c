// 3. Write a function to implement four function calculator. Function would take operands and operator as arguments and returns result.

#include<stdio.h>
int flag = 0;
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int add(int a, int b);
int accept_num();

int main()
{
int n1,n2,res;
n1 = accept_num();
n2 = accept_num();
enum cal{EXIT,ADD,SUB,MUL,DIV}ch;
printf("0.EXIT\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
printf("Enter your choice :");
scanf("%d",(int*)&ch);

switch(ch)
{
case ADD:res = add(n1,n2);
		  break;

case SUB: res = sub(n1,n2);
		  break;

case MUL: res = mul(n1,n2);
		  break;

case DIV: res = div(n1,n2);
		  break;

case EXIT:printf("Bye\n");
		  break;
default: printf("Invalid choice\n");	
}
if (flag == 0)
printf("Result = %d\n",res);
flag = 0;
return 0;
}

int add(int a, int b)
{
  return a+b;
}

int sub(int a, int b)
{
  return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
  if(b==0)
 {
 printf("cant divide by zero");
 flag = 1;
 }
 else
 return a/b;
}
int accept_num()
{
int x;
printf("Enter operand :\n");
scanf("%d",&x);
return x;
}
