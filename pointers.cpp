// pointers

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 123;
    int *p;
    p = &a;                                                      // stores the memory loacation.
    cout << "P variable memory location is --> " << p << endl;   // display the p variable memory loaction
    cout << "Value of p is" << setw(21) << "--> " << *p << endl; // display the p data

    return 0;
}