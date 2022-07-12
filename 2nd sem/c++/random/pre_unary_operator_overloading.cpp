// pre unary operator overloading
#include <iostream>
using namespace std;

class test
{
    int a;

public:
    test(int z)
    {
        a = z;
    }

    void operator++()
    {
        ++a;
    }

    void display()
    {
        cout << a;
    }
};

int main()
{
    test d(12);
    ++d;
    d.display();
    return 0;
}