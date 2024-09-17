/*3. Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to given tables*/

#include<stdio.h>
int main()
{
int empid,departno;
char desgcode;

printf("Enter Employee ID: \n");
scanf("%d", &empid);

printf("Enter Department No:\n");
scanf("%d", &departno);

printf("Enter Designation code(M,S,s.C): \n");
scanf(" %c", &desgcode);

switch(desgcode)
{
case 'M': printf("Employee with employee ID %d is working in \"Marketing\" department as \"Manager\"\n",empid);
break;

case 'S': printf("Employee with employee ID %d is working in \"Management\" department as \"Supervisor\"\n",empid);
break;

case 's': printf("Employee with employee ID %d is working in \"Sales\" department as \"Security Officer\"\n",empid);
break;

case 'C': printf("Employee with employee ID %d is working in \"Designing\"department as \"Clerk\"\n",empid);
break;

}
return 0;
}
