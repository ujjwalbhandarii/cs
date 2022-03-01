/*
******************TYPE OF CONSTRUCTORS**************************

1. defualt constructor --> constructor passing no parameters
2. parameterize constructor --> constructor with params
3. copy constructor  --> copying the value of one object to another object.
*/

// defualt constructor
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