// simple switch demo.
#include <iostream>
using namespace std;

int main()
{
    int num;

flag:
    cout << "Please select your choice." << endl;
    cin >> num;

    switch (num)
    {

    case 1:
        cout << "you choose 1" << endl;
        goto flag;

    case 2:
        cout << "You choose case 2 " << endl;
        goto flag;

    case 3:
        cout << "you choose 3" << endl;
        goto flag;

    case 4:
        cout << "you choose 4" << endl;
        goto flag;

    default:
        break;
    }
    return 0;
}
