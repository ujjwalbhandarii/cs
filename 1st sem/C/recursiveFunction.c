
/*
Program: Factorial of a given number using recursive function.

*/
#include<stdio.h>
// #include<conio.h>

int fact(int n); /* Function Definition */

void main()
{
 int num, res;

 printf("Enter positive integer: ");
 scanf("%d",&num);

 res = fact(num);             /* Normal Function Call */


 printf("%d! = %d" ,num ,res);
//  getch();
}
int fact(int n) /* Function Definition */
{
 int f=1;
 if(n <= 0)
 {
  return(1);
 }
 else
 {
  f = n * fact(n-1); /* Recursive Function Call as fact() calls itself */
  return(f);
 }
}