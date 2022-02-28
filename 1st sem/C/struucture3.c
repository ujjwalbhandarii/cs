//Records of n Students & Find Highest Marks


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
 /* Declaration of array of structure */
 struct student s[20], lg;
 int i,n;
 
 printf("Enter n:\n");
 scanf("%d",&n);
 for(i=0;i< n;i++)
 {
  printf("Enter name, roll and marks of student:\n");
  scanf("%s%d%f",s[i].name, &s[i].roll, &s[i].marks);
 }
 lg = s[0];
 for(i=0;ilg.marks)
  {
   lg = s[i];
  }
 }
 printf("Student obtaing highest marks is:\n");
 printf("Name: %s\n", lg.name);
 printf("Roll: %d\n", lg.roll);
 printf("Marks: %0.2f\n", lg.marks);
 return 0;
}