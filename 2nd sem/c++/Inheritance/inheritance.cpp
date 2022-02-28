#include <iostream>
using namespace std;
// base class
class Vehicle
{
public:
    void horn()
    {
        cout << "my car horns like puuuuuu puuuuuu !";
    }
};

// derived class
class Car : public Vehicle // single ( : ) is used to derive class.
{
public:
    string model = "tracktor";
};
int main()
{
    Car myobj;
    myobj.horn();
    cout << endl
         << "my car model is " << myobj.model;
    return 0;
}