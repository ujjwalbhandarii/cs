// pointer as a function argument -- call by refrence
#include <iostream>
using namespace std;

int incremented(int &a)
{
    return (a + 1);
}

int main()
{
    int b;
    cout << ": ";
    cin >> b;

    cout << incremented(b);
    return 0;
}