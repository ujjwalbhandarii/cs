// C program to illustrate reading data in structure variables and displaying the content


#include<stdio.h>

/* Declaration of structure */
struct student
{
 char name[30];
 int roll;
 float marks;
};

int main()
{
 /* Declaration of structure variable */
 struct student s1;
 
 printf("Enter name, roll and marks of student:\n");
 scanf("%s%d%f",s1.name, &s1.roll, &s1.marks);
 printf("Student detail is:\n");
 printf("Name : %s\n", s1.name);
 printf("Roll : %d\n", s1.roll);
 printf("Marks : %f\n", s1.marks);
 
 return 0;
}