#include <iostream>
using namespace std;

template <class X, class Y>
void fun(X a, Y b)
{
    cout << "a: \t" << a << endl
         << "b: \t" << b << endl;
}

int main()
{
    fun(10, 10.2);
    return 0;
}