/*2. Write a function to read a file character by character and copy the contents to another file.
Source file pointer and Destination file pointers should be arguments to the function. Use the
function to copy the file to destination file, display contents of the file, accept data from user
and write to destination file.*/

#include<stdio.h>

void accept_arr(char *ptr);
int main()
{
char *arr[30];


accept_arr(arr,30);



return 0;
}

void accept_arr(char *ptr)
{
printf("Enter array elements -");
fgets(arr,26,stdin);
}
