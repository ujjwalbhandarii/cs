// wap that demonstrates the technique of overloading the copy constuctor

#include <iostream>
using namespace std;
class A
{
    int x, y;

public:
    A()
    {
        cout << "defualt constructor" << endl;
    }

    A(int a, int b)
    {
        cout << "parameterized constructor called! " << endl;
        x = a;
        y = b;
    }

    A(const A &old)
    {
        // old is the old object being passed
        x = old.x; // this object's x to old object'x
        y = old.y;
        cout << "copy constructor called" << endl;
    }

    void print()
    {
        cout << x << "" << y << endl;
    }
};

int main()
{
    // sample code to show defualt constructor
    A obj(10, 20); // making a object of class A --> Implicit
    A obj2(obj);   // copy constructor called old object 'obj' is passed
    obj2.print();
    return 0;
}