#include <iostream>
using namespace std;

template <class T>
class anish
{
    T a, b;

public:
    void fun(T c, T d)
    {
        a = c;
        b = d;
    }
    void display()
    {
        cout << a + b;
    }
};

int main()
{
    anish<string> myobj;
    myobj.fun("a", "b");
    myobj.display();
    cout << endl;

    anish<int> myobj2;
    myobj2.fun(10, 10);
    myobj2.display();

    return 0;
}