#include <iostream>
using namespace std;
int main()
{
    int *p;

    p = new int;

    *p = 50;

    cout << *p;

    delete p;
}