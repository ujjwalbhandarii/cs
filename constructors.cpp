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

// another
#include <iostream>
using namespace std;
class sid
{
public:
    int money;
    sid(int a)
    {
        money = a;
    }
};
int main()
{
    sid ujjwal(200);
    cout << "ujjwal have to give " << ujjwal.money << " to sid";
    return 0;
}

// another example     (calling function inside constructor )
#include <iostream>
using namespace std;
class ujjwal
{
public:
    ujjwal();     // initialization of constructor
    int demand(); // intialization of function
};

ujjwal::ujjwal() // constructor
{
    demand(); // function call
}

int ujjwal::demand() // function outside class
{
    cout << "Demand function is working." << endl;
}
int main()
{
    ujjwal u; // class_name and constructor.
    return 0;
}

// another

#include <iostream>
using namespace std;
class tryA
{
public:
    int cost;
    string g_name;
    string bf_name;
    tryA(string x, string y, int z);
};

tryA::tryA(string x, string y, int z)
{
    g_name = x;
    bf_name = y;
    cost = z;
}
int main()
{
    tryA s("neha", "ujjwal", 1200000);
    cout << s.bf_name << " has spend " << s.cost << " for " << s.g_name << endl;
    return 0;
}

/*
Funny one

*/

#include <iostream>
using namespace std;
class kiran
{
public:
    string name;
    int yesno;
    kiran()
    {

        cout << "Enter your name: ";
        cin >> name;
    }
    int ask();
    int decision();
};

int kiran::ask()
{
    cout << "Hey " << name << "!" << endl;
    cout << "Did you got your valentine?" << endl;
    cout << "1. Yes \n2. Still searching" << endl;
    cout << "Don't be shy tell tell ";
    cin >> yesno;
}
int kiran::decision()
{
    if (yesno == 1)
    {
        cout << "congrats! enjoy your life bro." << endl;
    }
    if (yesno == 2)
    {
        cout << "Dont Worry you will soon get one. \nlife is not so easy but also not too hard. " << endl;
    }
}
int main()
{
    kiran life;
    life.ask();
    life.decision();
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