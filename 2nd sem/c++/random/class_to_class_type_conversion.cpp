#include <iostream>
using namespace std;

class One
{
    string anish = "he is anish";

public:
    string getStrOne()
    {
        return (anish);
    }

    void display()
    {
        cout << "from class one ::" << anish << endl;
    }
};

class Two
{
    string b;

public:
    void operator=(One a)
    {

        b = a.getStrOne();
    }

    void display()
    {
        cout << "from Two class ::" << b;
    }
};

int main()
{
    One a;
    Two b;

    b = a;

    a.display();
    b.display();
}