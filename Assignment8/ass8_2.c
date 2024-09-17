
/*2. Write a function to accept student information from the user. Write another function to print
student’s information. Re-use these functions in rest of the assignments wherever required.*/

#include<stdio.h>

typedef struct student{
 int rollno;
 char name[20];
 float marks;
 }stud_t;

void accept_studdata(stud_t *ptr);
void printf_studdata(stud_t s);

int main()
{
stud_t s;

accept_studdata(&s);
printf_studdata(s);
return 0;
}

void accept_studdata(stud_t *ptr)
{
	printf("Enter student data(Roll No, name, marks): ");
	scanf("%d %s %f",&ptr->rollno, ptr->name, &ptr->marks);
}

void printf_studdata(stud_t s)
{
	printf("Roll No - %d\nName - %s\nMarks - %f\n",s.rollno, s.name, s.marks);
}





