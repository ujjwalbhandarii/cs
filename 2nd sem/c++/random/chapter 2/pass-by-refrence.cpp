// Pass by Reference

#include <iostream>
using namespace std;

void swapper(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 1, y = 2;
    cout << "x: " << x << " "
         << "y: " << y << endl;

    swapper(x, y);

    cout << "x: " << x << " "
         << "y: " << y << endl;

    return 0;
}