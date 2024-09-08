/*7. Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
c. Conditional operator*/

#include<stdio.h>
int main()
{
int year;
printf("Enter year -");
scanf("%d",&year);
(year%4 == 0 && year%100!=0)?printf("%d is a leap year\n",year):(year % 400 == 0)? printf("%d is a leap year\n",year):printf("%d is not a leap year\n",year);
return 0;
}
