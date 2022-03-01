// example of namespace
// we can use identifiers or variable having same name inside namespace and they dont conflict each other.

#include <iostream>
using namespace std;
namespace ujjwal
{

    int a, b;
    void fun()
    {
        cout << "enter a and b: ";
        cin >> a >> b;
        cout << "sum is " << a + b;
    }
};

namespace bhandari
{
    int a, b;
    void mul()
    {
        cout << "enter a and b for multiply";
        cin >> a >> b;
        cout << "mul is " << a * b;
    }
};
int main()
{
    ujjwal::fun();
    ujjwal::fun();
    return 0;
}