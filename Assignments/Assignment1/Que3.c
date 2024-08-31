//print ASCII value of entered char in char,dec,hex,oct & print char for entered ASCII value
#include<stdio.h>
void main()
{
char ch;
int num;
printf("Enter the character -");
scanf("%c",&ch);
printf("ASCII value of entered character is\n %d in decimal\n %o in octal\n %x in hexadecimal\n",ch,ch,ch);

printf("Enter the ASCII value -");
scanf("%d",&num);
printf("Character for entered ASCII value is %c\n",num);
}
