// cpp program to show storing refrences.

#include <iostream>
using namespace std;
int main()
{
    string man = "ujjwal";
    string &ref = man;
    cout << man << endl;
    cout << ref;
    return 0;
}