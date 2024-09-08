/* WAP to accept 4 digit no
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
*/

#include<stdio.h>
void main()
{
int num,a,b,c,d,fv;
printf("Enter 4 digit number :");
scanf("%d",&num);
a = num/1000;num = num%1000;
b = num/100;num = num%100;
c = num/10;num = num%10;
d = num/1;num = num%1;
printf("Face value of each digit of %d is %d %d %d %d \n",num,a,b,c,d);

a = num/1000;num = num%1000;a = a*1000;
b = num/100;num = num%100;b = b*100;
c = num/10;num = num%10;c = c*10;
d = num/1;num = num%1;
printf("Place value of each digit of %d is %d %d %d %d \n",num,a,b,c,d);

}

