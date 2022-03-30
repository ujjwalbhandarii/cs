// defualt consturctor

#include <iostream>
using namespace std;
class test
{
    int x, y;

public:
    test(int a, int b)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << x << y;
    }
};
int main()
{
    test t1(50, 60);
    t1.showdata();
    return 0;
}