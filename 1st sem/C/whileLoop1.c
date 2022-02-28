// Program to find sum of digit of a given number.

#include<stdio.h>
// #include<conio.h>

void main()
{
 int num, rem, sum=0;

 printf("Enter number: ");
 scanf("%d", &num);
 while(num!=0)
 {
  rem = num%10;
  sum = sum + rem;
  num = num/10;
 }
 printf("Sum is %d", sum);

}
