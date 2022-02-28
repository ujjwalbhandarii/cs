
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
