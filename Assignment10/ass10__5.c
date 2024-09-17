/*5. Write a function to check whether given character is alphabet or not. If it is alphabet, perform
its bitwise XOR operation with value 32 and observe the result.*/

#include<stdio.h>

int main()
{
char res;
char ch;
printf("Enter character - ");
scanf("%c",&ch);
if(ch >= 'A'  && ch <= 'Z' || ch >= 'a' && ch <= 'z')

res = ch ^ 32;
printf("res = %c\n",res);

return 0;
}
