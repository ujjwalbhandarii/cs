// function overloading
// when same name is used but different parameters are passed then that is called function overloaded.
#include <iostream>
using namespace std;

int max(int a, int b)
{
    return ((a > b) ? a : b);
}

float max(float i1, float i2)
{
    return ((i1 > i2) ? i1 : i2);
}

long max(long l1, long l2)
{
    return (l1 > l2 ? l1 : l2);
}

char max(char c1, char c2)
{
    return (c1 > c2 ? c1 : c2);
}

int main()
{
    int a = 12, b = 15;
    cout << "greater is " << max(a, b) << endl;

    float i1 = 0.5, i2 = 10.2;
    cout << "greater in float is " << max(i1, i2) << endl;

    long l1 = 1234, l2 = 3456;
    cout << "greater in long is " << max(l1, l2) << endl;

    char c1[] = "a", c2[] = "z";
    cout << "greater in char is " << max(c1, c2);
    return 0;
}