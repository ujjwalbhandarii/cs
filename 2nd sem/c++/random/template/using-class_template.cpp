#include <iostream>
using namespace std;

template <class T>
class anish
{
    T a, b;

public:
    void fun(T d, T e)
    {
        a = d;
        b = e;
    }

    void result()
    {
        T c;
        c = (a > b) ? a : b;
        cout << c;
    }
};
int main()
{
    anish<int> myobj;
    myobj.fun(1, 2);
    myobj.result();
    return 0;
}