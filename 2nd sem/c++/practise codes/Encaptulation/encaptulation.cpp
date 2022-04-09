// encaptulation

#include <iostream>
using namespace std;
class myclass
{
    int salary;

public:
    void setsalary(int s);
    int getsalary();
};

void myclass::setsalary(int s)
{
    salary = s;
}

int myclass::getsalary()
{
    return salary;
}
int main()
{
    myclass myobj;
    myobj.setsalary(2000);
    cout << "My salary is " << myobj.getsalary() << endl;
    return 0;
}