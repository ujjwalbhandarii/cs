// destructor
#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    test()
    {
        cout << "enter two number" << endl;
        cin >> a >> b;
        cout << a + b;
    }

    ~test()
    {
        cout << "memory deallocation" << endl;
    }
};
int main()
{
    test t1;
    return 0;
}