/*
header file :  #include<iomanip>                                                -- must be included to use setw, setprecision
Manuplators:
1. endl         --> for new line                                                -- SYNTAX > endl;
2. setw         --> to allocate space                                           -- SYNTAX > set(num)
3. setprecision --> to manage precision for floating numbers.                   -- SYNTAX > setprecision( num )

*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a = 0.4123452, b = 2.3344455;
    cout << "beautifl" << endl
         << setw(11) << "nice" << endl; // setw

    cout << a << endl;                    // by defualt float has precision for 6 digits after period.
    cout << setprecision(2) << b << endl; // prints 2.33

    return 0;
}