// type conversion
// -> basic to basic
// -> basic to class
// -> class to basic
// -> class to class

// basic to class type
#include <iostream>
using namespace std;

class complex
{
    int a, b; // member variable

public:
    complex() // member function
    {
    }

    complex(int k)
    { // passed variable --> color variable
        a = k;
        b = 10;
    }

    void showdata()
    {
        cout << a << "  " << b;
    }
};

int main()
{
    complex c;
    int x = 5; // variable
    c = x;
    c.showdata();
    return 0;
}