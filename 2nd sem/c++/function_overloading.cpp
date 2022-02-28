/*
Function overloading is a feature of object oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading.

In Function Overloading “Function” name should be the same and the arguments should be different.
Function overloading comes under the compile-time polymorphism.

#  Why is Function overloading not possible with different return types?
-> Function overloading comes under the compile-time polymorphism. During compilation, the function signature is checked. So, functions can be overloaded, if the signatures are not the same. The return type of a function has no effect on function overloading, therefore the same function signature with different return type will not be overloaded.

Example: if there are two functions: int sum() and float sum(), these two will generate a compile-time error as function overloading is not possible here.
*/
// simple example of function overloading

#include <iostream>
using namespace std; // argument must be of different types s
void print(int a)    // integer type argument
{
    cout << "Value of a is " << a << endl;
}
void print(double b) // double type argument
{
    cout << "Value of b is " << b << endl;
}
void print(char *z) // if not made pointer (error) ==> no instance of overloaded function "print" matches the argument list
{
    cout << "string value is" << z << endl;
}
int main()
{
    print(1);
    print(2.1);
    print("ujjwal");

    return 0;
}