/*
To create a constructor, use the same name as the class, followed by parentheses ()

*/

// simple constructor code.
#include <iostream>
using namespace std;
class print
{
public:
    print()
    {
        cout << "hello world";
    }
};
int main()
{
    print car;
    return 0;
}

// constructors
#include <iostream>
using namespace std;
class Ujjwal
{
public:
    string f_1;
    string f_2;
    string f_3;
    int months;
    Ujjwal(string x, string y, string z, int w)
    {
        f_1 = x;
        f_2 = y;
        f_3 = z;
        months = w;
    }
};

int main()
{
    Ujjwal myobj1("ankit", "prabesh", "siddharth", 8);

    cout << "we are " << myobj1.f_1 << ", " << myobj1.f_2 << ", " << myobj1.f_3 << " and me." << endl;

    return 0;
}

// constructor outside class.
#include <iostream>
using namespace std;
class Ujjwal
{
public:
    string f_1;
    string f_2;
    string f_3;
    int months;
    Ujjwal(string x, string y, string z, int w); // constructor decleration.
};

Ujjwal::Ujjwal(string x, string y, string z, int w)
{
    f_1 = x;
    f_2 = y;
    f_3 = z;
    months = w;
}

int main()
{
    Ujjwal myobj1("ankit", "prabesh", "siddharth", 8);

    cout << "we are " << myobj1.f_1 << ", " << myobj1.f_2 << ", " << myobj1.f_3 << " and me." << endl;

    return 0;
}