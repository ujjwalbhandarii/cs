// object

#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    test(int x, int y)
    {
        a = x;
        b = y;
    }
    test(test &t)
    {
        a = t.a;
        b = t.b;
    }
    void showdata()
    {
        cout << a << "  " << b << endl;
    }
};

int main()
{
    test t1(50, 20);
    t1.showdata();

    test t2 = t1;
    t2.showdata();
    return 0;
}