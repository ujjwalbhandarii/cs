// late binding

#include <iostream>
using namespace std;
class Late
{
public:
    virtual void show()
    {
        cout << "im late for my class" << endl;
    }
};
class Always : public Late
{
public:
    void show()
    {
        cout << "hello from virtual class" << endl;
    }
};

int main()
{
    Late *la = new Always;
    la->show(); // compile time polymorphism
    return 0;
}