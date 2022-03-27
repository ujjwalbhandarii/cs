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

/*

the copy constructor is a constructor which creates an object by initializing it with an object of the same class,
which has been created previously.

the copy constructor is used to ::
1. initalized one object from another of the same type
2. copy an object to pass from another of the same type
3. copy an object to return it from a function

if the class has pointer variables and has some dynamic memory allocations, then it is a must to have a copy constructor.
the most common form of copy constructor is shown here;



*/