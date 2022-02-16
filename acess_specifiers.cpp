/*
Access specifiers :

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.


The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you
can provide public get and set methods.

*/
#include <iostream>
using namespace std;
class myClass
{
    int salary;

public:
    void setSalary(int a)
    {
        salary = a;
    }
    int getSalary();
};
int myClass::getSalary()
{
    return salary;
}
int main()
{
    myClass myObj;
    myObj.setSalary(200);
    cout << myObj.getSalary();
    return 0;
}