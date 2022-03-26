// function overloading

#include <iostream>
using namespace std;

float perimeter(float);
int perimeter(int, int);
int perimeter(int, int, int);

int main()
{
    cout << "Perimeter of a circle" << perimeter(2.0) << endl;
    cout << "perimeter of a rectange" << perimeter(10, 10) << endl;
    cout << "perimeter of a triangle" << perimeter(5, 10, 15);

    return 0;
}

float perimeter(float r)
{
    return (2 * 3.14 * r);
}

int perimeter(int l, int b)
{
    return (2 * (l + b));
}

int perimeter(int a, int b, int c)
{
    return (a + b + c);
}