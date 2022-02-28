#include <iostream>
using namespace std;
class Base
{
public:
    void print()
    {
        cout << "base class" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "derived class" << endl;
    }
};

int main()
{
    Derived obj1;
    Base obj2;

    obj1.print();       // prints derived
    obj1.Base::print(); // prints base

    return 0;
}