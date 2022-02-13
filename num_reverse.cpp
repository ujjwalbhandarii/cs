// reverse a number
#include <iostream>
using namespace std;
int main()
{
    int num, rem, rev = 0;
    cout << "enter a number: ";
    cin >> num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rem + (rev * 10);
        num /= 10;
    }

    cout << "reverse: " << rev;
    return 0;
}

// reverse a number using class.
#include <iostream>
using namespace std;
class rev
{
public:
    int num, rem, rev = 0;
    int entry()
    {
        cout << "enter a number: ";
        cin >> num;
    }
    int check()
    {
        while (num != 0)
        {
            rem = num % 10;
            rev = rem + (rev * 10);
            num /= 10;
        }
    }
    int output()
    {
        cout << "reverse num: " << rev;
    }
};
int main()
{
    rev myobjrev;
    myobjrev.entry();
    myobjrev.check();
    myobjrev.output();
    return 0;
}

// number revolve using for loop.

#include <iostream>
using namespace std;
int main()
{
    int num, rev, rem;
    cout << "enter a number: ";
    cin >> num;

    for (rev = 0; num != 0; num = num / 10) // for(intilzation, contition, limit)
    {
        rem = num % 10;
        rev = rem + (rev * 10);
    }

    cout << "revolve: " << rev;
    return 0;
}

// revserve a number using goto statements.(without loops)

#include <iostream>
using namespace std;
int main()
{
    int num, rev = 0, rem;
    cout << "Enter a number: ";
    cin >> num;

flag:
    rem = num % 10;
    rev = rem + (rev * 10);
    num /= 10;
    if (num != 0)
        goto flag;
    cout << "Revolve is: " << rev;
    return 0;
}

// reverse using classes
#include <iostream>
using namespace std;
class reve
{
public:
    int num, rev = 0, rem;
    int print();
    int process();
    int output();
};
int reve ::print()
{
    cout << "Enter a number: ";
    cin >> num;
}
int reve ::process()
{
    while (num != 0)
    {
        rem = num % 10;
        rev = rem + (rev * 10);
        num /= 10;
    }
}
int reve ::output()
{
    cout << "Reversed num: " << rev;
}
int main()
{
    reve myclassObj;
    myclassObj.print();
    myclassObj.process();
    myclassObj.output();
    return 0;
}