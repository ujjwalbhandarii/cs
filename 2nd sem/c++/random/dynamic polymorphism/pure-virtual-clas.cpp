// pure virtual function

#include <iostream>
using namespace std;

class polygon
{
protected:
    int a, b;

public:
    void setvalue(int x, int y)
    {
        a = x;
        b = y;
    }
    virtual int area() = 0; // = 0 --> pure virtual function
};

class triangle : public polygon
{

public:
    int area()
    {
        return (3.14 * a);
    }
};

class rectangle : public polygon
{
public:
    int area()
    {
        return (a * b);
    }
};

int main()
{
    polygon *p;
    rectangle rect;
    triangle tri;

    p = &rect;
    p->setvalue(2, 2);
    cout << p->area();
}