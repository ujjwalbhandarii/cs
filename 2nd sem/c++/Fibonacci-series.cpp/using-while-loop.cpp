// fibonachni series

#include <iostream>
using namespace std;
int main()
{
    const unsigned long limit = 4294967295;
    unsigned long init = 0;
    unsigned long next = 1;
    unsigned long sum = 0;

    while (sum < limit / 2)
    {
        sum = sum + init;
        cout << sum << endl;
        init = next;
        next = sum;
    }
    return 0;
}