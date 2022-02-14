// switch
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int num, inte, a, b, c;
    string name;

flag:
    cout << endl;
    cout << "******** choice bar **********" << endl;
    cout << endl;
    cout << "1. Name print\n2. Multiplacation Table\n3. Function Implementation\n4. Exit" << endl;
    cout << " " << endl;
    cout << "Please select your choice: ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "----------------------------" << endl;
        cout << "You choose 1" << endl;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Your name is ==>" << name << endl;
        cout << endl;
        goto flag;

    case 2:
        cout << "----------------------------" << endl;
        cout << "You choose case 2 " << endl;
        cout << "Enter an integer: ";

        cin >> inte;
        cout << "Multiplacatation table ==> "
             << " " << inte << " "
             << "is" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << inte << " * " << i << " = "
                 << " " << inte * i << endl;
        }
        goto flag;

    case 3:

        cout << "----------------------------" << endl;
        cout << "you choose 3" << endl;
        cout << "Enter 1st number: ";
        cin >> a;
        cout << "Enter 2nd number: ";
        cin >> b;
        c = add(a, b);
        cout << "Addition ==> " << c << endl;

        goto flag;

    case 4:
        cout << "----------------------------" << endl;
        exit(0);
        cout << "you choose 4" << endl;
        goto flag;

    default:
        break;
    }
    return 0;
}
