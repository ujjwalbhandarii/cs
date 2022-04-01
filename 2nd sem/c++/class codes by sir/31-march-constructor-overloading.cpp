// constructor overloading

#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    test()
    {
        cout << "enter two numbers ";
        cin >> a >> b;
        cout << a + b << endl;
    }

    test(int x, int y)
    {
        cout << x + y << endl;
    }

    test(int m, float n)
    {
        cout << m + n;
    }
};

int main()
{
    test t1, t2(50, 60), t3(70, 70.5f);
    return 0;
}