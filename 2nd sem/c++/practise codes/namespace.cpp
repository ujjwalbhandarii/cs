#include <iostream>
using namespace std;
namespace csitA
{
    int a, b, sum;
    void calc()
    {
        cout << "enter two numbers: ";
        cin >> a >> b;
        sum = a + b;
        cout << "Sum is " << sum;
    }
}
namespace csitB
{
    int a, b, diff;
    void calc()
    {
        cout << "enter two numbers: ";
        cin >> a >> b;
        diff = a - b;
        cout << "Difference is " << diff;
    }
}

int main()
{
    csitA::calc();
    // csitB::calc();

    return 0;
}