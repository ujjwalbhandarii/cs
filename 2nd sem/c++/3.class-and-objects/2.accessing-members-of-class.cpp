/*
Accessing data members and member functions:

The data members and member functions of class can be accessed using the dot(‘.’) operator with the object.
For example if the name of object is obj and you want to access the member function with the name printName()
then you will have to write obj.printName().

*/

#include <iostream>
using namespace std;
class myClass
{
public:
    string name;
    void display()
    {
        cout << "my name is " << name;
    }
};
int main()
{
    myClass myObj;

    myObj.name = "ujjwal"; // accessing data member

    myObj.display();
    return 0;
}