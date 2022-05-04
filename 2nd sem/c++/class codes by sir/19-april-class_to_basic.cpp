// class to basic

#include <iostream>
using namespace std;

class complex
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
        cout << a << "\t" << b << endl;
    }

    operator int()
    {
        return (a);
    }
};

int main()
{
    complex c1;
    c1.getdata(5, 6);
    int x = c1;
    cout << x;
    return 0;
}