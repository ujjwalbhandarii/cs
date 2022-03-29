// local class
// function vitra class define garne

#include <iostream>
using namespace std;
void sum()
{
    class test
    {
        int a, b;

    public:
        void getdata(int x, int y)
        {
            a = x;
            b = y;
        }
        void showdata()
        {
            cout << a + b;
        }
    };
    // making object inside function
    test t1;
    t1.getdata(20, 30);
    t1.showdata();
}

int main()
{
    sum();
    return 0;
}