
/*1. Declare a structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same*/

#include<stdio.h>

typedef struct student{
 int rollno;
 char name[10];
 float marks;
 }stud_t;


int main()
{
stud_t s;
printf("Enter student data(Roll No, name, marks): ");
scanf("%d %s %f",&s.rollno, s.name, &s.marks);
printf("Roll No- %d\nName- %s\nMarks- %f\n",s.rollno, s.name, s.marks);

return 0;
}





