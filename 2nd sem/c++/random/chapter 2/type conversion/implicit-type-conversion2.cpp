// implicit type example 2

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b;

    b = a; // implicit and value will be 5.0

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    return 0;
}