// wap program for "exceptions with arguments".

#include <iostream>
using namespace std;
double division(int var1, int var2)
{
    if (var2 == 0)
    {
        throw "divison by zero";
    }
    return (var1 / var2);
}
int main()
{
    int a = 30, b = 0;
    double d = 0;
    try
    {
        d = division(a, b);
        cout << d << endl;
    }

    catch (const char *error)
    {
        cout << error << endl;
    }
    return 0;
}