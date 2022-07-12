// virtual base class
#include <iostream>
using namespace std;

class A
{
public:
    int a;
};

class B : virtual public A
{
public:
    int b;
};

class C : virtual public A
{
public:
    int c;
};

class D : public B, public C
{
public:
    int d;
};

int main()
{
    D d;
    d.a = 10;
    d.c = 10;
    d.d = 10;
    d.b = 10;

    cout << d.a << endl
         << d.b << endl
         << d.c << endl
         << d.d << endl;
}