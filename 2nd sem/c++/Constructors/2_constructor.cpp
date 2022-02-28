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