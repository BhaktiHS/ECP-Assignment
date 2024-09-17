//1. Write a program to read a file character by character and display its content on screen.

#include<stdio.h>

int main(void)
{
char ch;

//1. read mode
FILE *fp = fopen("text1.txt","r");

//2. read char from file & print on console
while((ch = fgetc(fp)) != EOF)
printf("%c",ch);

//.3 close
fclose(fp);

return 0;
}
