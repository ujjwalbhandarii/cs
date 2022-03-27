// create a real scenario where static data members are useful. expain with suitable example.

/*
if a data member in a class is defined as static, then only one copy of that memner is created for the entire class
and is shared by all objects of that class, no matter how many many objects are created.
hence, these data members are normally used to maintain values common to the entire class and are also called
class variables.

*/

#include <iostream>
using namespace std;
class rectangle
{
    int length, breadth;
    static int count; // static data member

public:
    void setdata(int l, int b)
    {
        length = l;
        breadth = b;
        count++;
    }

    void displaycount()
    {
        cout << count << endl;
    }
};

int rectangle::count;

int main()
{
    rectangle r1, r2, r3;
    r1.displaycount();
    r2.displaycount();
    r3.displaycount();
    r1.setdata(15, 6);
    r2.setdata(9, 8);
    r3.setdata(12, 9);
    r1.displaycount();
    r2.displaycount();
    r3.displaycount();
    return 0;
}