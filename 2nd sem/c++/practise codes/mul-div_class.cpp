#include <iostream>
using namespace std;

class info
{
public:
    int a, b, Sum, mul;
    void input()
    {
        cout << "Enter the value of a:: ";
        cin >> a;
        cout << "Enter the value of b :: ";
        cin >> b;
    }
    void sumDisplay()
    {
        Sum = a + b;
        cout << endl;
        cout << "Sum is:: " << Sum << endl;
    }
    void mulDisplay()
    {
        mul = a * b;
        cout << "Multiply is::" << mul << endl;
    }
};

int main()
{
    info call;
    call.input();
    call.sumDisplay();
    call.mulDisplay();
    return 0;
}