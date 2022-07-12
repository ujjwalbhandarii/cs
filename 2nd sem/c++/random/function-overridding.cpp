
// function overrriding
#include <iostream>
using namespace std;

class base
{
public:
    void print()
    {
        cout << "base";
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "derived";
    }
};

int main()
{
    derived d1;
    d1.print();
    return 0;
}
