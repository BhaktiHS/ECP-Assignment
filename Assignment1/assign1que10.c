/*10. Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate squareroot.
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.*/

#include<stdio.h>
#include<math.h>

int main()
{
int a,b,c,peri,area,sqt,s;
printf("Enter the 3 values to calculate area & perimeter :");
scanf("%d%d%d",&a,&b,&c);
peri = (a+b+(c*a)+b+c);
s = ((a+b+c)/2);
sqt = (s*(s-a)*(s-b)*(s-c));
area = sqrt(sqt);
printf("Area = %d\nPerimeter = %d\n",area,peri);
return 0;
}
