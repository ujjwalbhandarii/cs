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