// an example of early polymorphism

#include <iostream>
using namespace std;
class Ujjwal
{
public:
    void display()
    {
        cout << "hello from ujjwal class" << endl;
    }
};

class Bhandari : public Ujjwal
{
    void display()
    {
        cout << "hello from bhandari class" << endl;
    }
};

int main()
{
    Ujjwal *ub = new Bhandari;
    // the function call decided at compile time(compiler sees type of pointer )and calls base class function.

    ub->display(); // early polymorphism

    return 0;
}