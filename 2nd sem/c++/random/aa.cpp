

#include <iostream>
using namespace std;

class dist
{
    int a, b;

public:
    dist(int x, int y)
    {
        a = x;
        b = y;
    }

    dist operator++()
    {
        ++a;
        ++b;
    }

    void display()
    {
        cout << a << " " << b;
    }
};

int main()
{
    dist d(10, 2);
    ++d;
    d.display();
    return 0;
}