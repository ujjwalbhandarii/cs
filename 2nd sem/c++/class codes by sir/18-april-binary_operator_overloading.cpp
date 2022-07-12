// binary operator overloading

#include <iostream>
using namespace std;
class Test
{
    int a, b;

public:
    Test(int x, int y)
    {
        a = x;
        b = y;
    }

    Test operator+(Test t1, Test t2)
    {
        Test t3;
        t3.a = t1.a + t2.a;
        t3.b = t1.b + t2.b;
        return t3;
    }

    void display()
    {
        cout << a << endl
             << b << endl;
    }
};

int main()
{
    Test t1(5, 6);
    Test t2(7, 8);
    Test t3;
    t3 = t1 + t2;
    t3.display();
    return 0;
}
