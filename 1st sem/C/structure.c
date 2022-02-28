// C program to illustrate declaration and initialization of structure


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
 /* Declaration and initialization of structure variable */ 
 struct student s1 = {"Parijat", 17, 80.5};
 
 printf("Student detail is:\n");
 printf("Name : %s\n", s1.name);
 printf("Roll : %d\n", s1.roll);
 printf("Marks : %f\n", s1.marks);
 
 return 0;
}