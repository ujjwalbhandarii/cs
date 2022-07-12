/* used to achieve run time polymorphism  --> virtual function

-- compile time -> early binding( operator || function overloading )
-- run time     -> late binding( virtual function )

* Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
* A class may have virtual destructor but it cannot have a virtual constructor.

*/

// CPP program to illustrate concept of Virtual Functions
#include <iostream>
using namespace std;
class base
{
public:
    virtual void print()
    {
        cout << "derived from base class" << endl;
    }

    void show()
    {
        cout << "show function from base class" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "this is from derived class" << endl;
    }

    void show()
    {
        cout << "show from derived class" << endl;
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    // Virtual function, binded at runtime
    bptr->print(); // output from derived class

    // Non-virtual function, binded at compile time
    bptr->show(); // from base class

    // d.print();
    // d.show();
    return 0;
}