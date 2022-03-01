// copy constructor

#include <iostream>
using namespace std;

class person
{
    int age;
    string name;
    string lover;

public:
    person(int a, string n, string l) // parameteric constructior
    {
        age = a;
        name = n;
        lover = l;
    }

    person(person &p1) // another constructor copying value of parametric constructor
    {
        age = p1.age;
        name = p1.name;
        lover = p1.lover;
    }

    void display()
    {
        cout << age << endl;
        cout << name << endl;
        cout << lover << endl;
    }
};

int main()
{
    person p(12, "ujjwal", "searching");
    cout << "Values in p " << endl;
    p.display();

    person p1(p); // copying p obj into p1 obj
    cout << endl
         << "Values inside p1" << endl;
    p1.display();

    return 0;
}