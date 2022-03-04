
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