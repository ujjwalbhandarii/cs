#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "this is A" << endl;
    }
};

class B : public A
{
public:
    void print()
    {
        cout << "derived class" << endl;
    }
};

int main()
{
    A a, *p;
    B b;

    p = &a;
    p->print();
    a.print();
    b.print(); // derived class

    p = &b;
    p->print();
    a.print();
    b.print();
    return 0;
}