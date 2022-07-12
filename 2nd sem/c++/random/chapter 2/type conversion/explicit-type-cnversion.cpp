// explicit type cast

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b;

    b = (float)a; // explicit --> 1st a is converted to float

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    return 0;
}