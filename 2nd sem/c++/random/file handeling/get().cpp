// using get()
#include <iostream>
using namespace std;

int main()
{
    char c[10];
    cout << "enter your name?";
    cin.get(c, 10);
    cout << c;
    return 0;
}