// simple constructor

#include <iostream>
using namespace std;
class test
{
public:
    int a, b;
    test()
    {
        cout << "Input two numbers" << endl;
        cin >> a >> b;
        cout << "their sum is " << a + b;
    }
};
int main()
{
    test t1; // constructor called
    return 0;
}