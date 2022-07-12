// pointer to pointer
#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    int *p = &a;
    cout << endl;
    cout << "*p: " << *p << endl; // value -> 5
    cout << " p: " << p << endl;  // address of a
    cout << "&a: " << &a << endl; //  address of itself

    cout << endl;
    int **q = &p;
    cout << "**q: " << **q << endl; // 5
    cout << " *q: " << *q << endl;  // address of p
    cout << "  q: " << q << endl;   //
    cout << endl;

    cout << endl;
    **q = 10;
    cout << "a: " << a << endl; // derefrencing
    cout << endl;

    cout << endl;
    **q = *p + 1;
    cout << "a: " << a << endl; // 11
    cout << endl;

    return 0;
}