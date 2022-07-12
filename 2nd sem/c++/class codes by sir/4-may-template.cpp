#include <iostream>
using namespace std;

template <class T>
void fun(T a, T b)
{
    cout << "a\t" << a << endl
         << "b\t" << b << endl;
}

int main()
{
    fun(1, 2);
    return 0;
}