// friend function   [ march 24 - 2022 s]
#include <iostream>
using namespace std;
class Sample
{
    int a, b;

public:
    void SetValue()
    {
        a = 25;
        b = 45;
    }
    friend int calc(Sample s);
};

int calc(Sample s)
{
    return (s.a + s.b) / 2;
}

int main()
{
    Sample x;
    x.SetValue();
    cout << calc(x);
    return 0;
}