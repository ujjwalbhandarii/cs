#include <iostream>
using namespace std;

class Type
{
    int t;

public:
    Type()
    {
        t = 0;
    }

    Type(int a)
    {
        a = t;
    }

    void display()
    {
        cout << "time is" << t;
    }
};

int main()
{
    Type d;
    int a = 45;

    d = a;

    d.display();

    return 0;
}