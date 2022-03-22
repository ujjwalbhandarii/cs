/*
******************TYPE OF CONSTRUCTORS**************************

1. defualt constructor --> constructor passing no parameters
2. parameterize constructor --> constructor with params
3. copy constructor  --> copying the value of one object to another object.
*/

// defualt constructor example
// Default constructor is the constructor which doesn’t take any argument. It has no parameters.
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    int roll;
    char name[15];
    float marks;

public:
    Student()
    {
        roll = 24;
        strcpy(name, "ujjwal");
        marks = 100.2;
    }
    void display()
    {
        cout << roll << endl;
        cout << name << endl;
        cout << marks << endl;
    }
};
int main()
{
    Student s;
    s.display();
    return 0;
}

/*
# What is constructor?
A constructor is a special type of member function of a class which initializes objects of a class.
In C++, Constructor is automatically called when object(instance of class) is created.
It is special member function of the class because it does not have any return type.

A default constructor is a constructor that either has no parameters, or if it has parameters,
all the parameters have default values.

If no user-defined constructor exists for a class A and one is needed, the compiler implicitly declares
a default parameterless constructor A::A(). This constructor is an inline public member of its class.
The compiler will implicitly define A::A() when the compiler uses this constructor to create an object of type A.
The constructor will have no constructor initializer and a null body.



# How constructors are different from a normal member function?

A constructor is different from normal functions in following ways:

Constructor has same name as the class itself
Constructors don’t have input argument
Constructors don’t have return type
A constructor is automatically called when an object is created.
It must be placed in public section of class.
If we do not specify a constructor, C++ compiler generates a default constructor for object
(expects no parameters and has an empty body).
*/