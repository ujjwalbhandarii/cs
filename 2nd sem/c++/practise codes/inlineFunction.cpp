// inline function// simple example of inhile function
#include <iostream>
using namespace std;
inline int cube(int a)
{
    return a * a * a;
}

int main()
{

    int num;
    cout << ":: ";
    cin >> num;
    cout << cube(num);
    return 0;
}