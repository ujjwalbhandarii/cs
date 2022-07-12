// implicit type conversion

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    float b = 5.5;

    cout << "result is automatically type cased to float type and sum of value is " << a + b; // float -> implicit
    return 0;
}