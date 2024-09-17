/*3. Write a function to accept array of student’s information from the user. Write another function
`to print the array student’s information. Re-use these functions in rest of the assignments
wherever required.*/

#include<stdio.h>
struct student{
	int rollno;
	char name[10];
	int std;
	float marks;
};

void acceptarray(s *ptr);
void printarray(s s1);

int main()
{
struct student [s];


acceptarray(&s);
printarray(s);

return 0;
}


void acceptarray(s *ptr)
{
printf("Enter array elements -");
for(int i=0; i<3; i++)
{
	for(int j=0;j<4;j++)
	{
		scanf("%d",&ptr[i][j]);
	}
}
}


void printarray(s s1)
{
printf("array elements :\n");
for int i




}
