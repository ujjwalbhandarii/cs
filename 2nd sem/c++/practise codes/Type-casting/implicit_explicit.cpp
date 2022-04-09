// implicit type --> automatic

#include <iostream>
using namespace std;
int main()
{
    int a;
    float c, b;
    a = 12;
    b = 12.2;

    c = a / b;
    cout << c;
    return 0;
}

// ***************************************************************************

// explicit type
#include <iostream>
using namespace std;
int main()
{

    int a = 2, b = 3;
    cout << (float)a / b;
    return 0;
}