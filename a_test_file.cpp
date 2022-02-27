#include <iostream>
using namespace std;
class Box
{
public:
    Box()
    {
        cout << "constructor" << endl;
    }
    ~Box()
    {
        cout << "destructor" << endl;
    }
};
int main()
{
    Box *myBoxArr = new Box[4];
    delete myBoxArr;
    return 0;
}