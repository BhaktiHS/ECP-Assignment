/*1. Write a program to demonstrate use of string library functions.
d. stricmp()*/

#include<stdio.h>
#include<string.h>

int main()
{
char str1[10] = "good",str2[10] = "GOOD";
printf("string1 = %s\n",str1);
printf("string2 = %s\n",str2);
printf("string comparision value = %d\n",stricmp(str1,str2));

char str3[10] = "sunbeam",str4[10] = "DESD";
printf("string1 = %s\n",str3);
printf("string2 = %s\n",str4);
printf("string comparision value = %d\n",stricmp(str3,str4));

char str5[10] = "GOOD",str6[10] = "morning";
printf("string1 = %s\n",str5);
printf("string2 = %s\n",str6);
printf("string comparision value = %d\n",stricmp(str5,str6));
return 0;
}
