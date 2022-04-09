// pass by reference

#include <iostream>
using namespace std;
void square(int &a)
{
    a *= a;
}

int main()
{
    int x;
    cin >> x;
    square(x);
    cout << x;
    return 0;
}