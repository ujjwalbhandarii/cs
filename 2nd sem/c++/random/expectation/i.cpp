#include <iostream>
using namespace std;

void divide(int a, int b)
{
    if (b == 0)
    {
        throw b;
    }
    else
    {
        cout << a / b;
    }
}

int main()
{
    int a, b;
    cout << " : ";
    cin >> a >> b;

    try
    {
        divide(a, b);
    }

    catch (int i)
    {
        cout << i;
    }
    return 0;
}