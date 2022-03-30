// const member function

#include <iostream>
using namespace std;
class test
{
public:
    int x = 50;
    void getdata() const
    {
        cout << x;
    }
};

int main()
{
    test t1;
    t1.getdata();
    return 0;
}