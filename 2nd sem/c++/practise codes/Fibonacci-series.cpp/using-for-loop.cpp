#include <iostream>
using namespace std;
int main()
{

    int numLimit, first = 0, second = 1, next;

    cout << "Enter nth term :  ";
    cin >> numLimit;

    for (int i; i < numLimit; i++)
    {
        cout << first << endl;
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}