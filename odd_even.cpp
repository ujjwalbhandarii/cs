// odd even using ternary operator.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;

    (num % 2 == 0) ? (cout << "num is even") : (cout << "num is odd");
    return 0;
}

// odd even using classes
#include <iostream>
using namespace std;
class oddEven
{
    int num;

public:
    int input()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
    int check()
    {
        if (num % 2 == 0)
        {
            cout << num << " is even number." << endl;
        }
        else
        {
            cout << num << " is odd number." << endl;
        }
    }
};
int main()
{
    oddEven myobj;
    myobj.input();
    myobj.check();
    return 0;
}

// odd even check using classes and ternary operator.
#include <iostream>
using namespace std;
class tern
{
public:
    int num;
    int func()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
    int ternCheck()
    {
        (num % 2 == 0) ? (cout << "num is even") : (cout << "num is odd");
    }
};
int main()
{
    tern myternobj;
    myternobj.func();
    myternobj.ternCheck();
    return 0;
}

// odd even using string and ternary operator.
#include <iostream>
using namespace std;
int main()
{
    int num;
    string ch;
    cout << "enter a number: ";
    cin >> num;
    ch = (num % 2 == 0) ? ("e") : ("o");
    if (ch == "e")
    {
        cout << "Entered number is even" << endl;
    }
    else
    {
        cout << "Entered number is odd" << endl;
    }
    return 0;
}