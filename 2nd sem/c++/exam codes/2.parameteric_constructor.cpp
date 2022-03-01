// example of parameteric

#include <iostream>
using namespace std;

class person
{
    int roll;
    string name;
    float marks;

public:
    person(int r, string n, float m)
    {
        roll = r;
        name = n;
        marks = m;
    }

    void display()
    {
        cout << roll << endl;
        cout << name << endl;
        cout << marks << endl;
    }
};

int main()
{
    person p(12, "ujjwal", 123);
    p.display();
    return 0;
}