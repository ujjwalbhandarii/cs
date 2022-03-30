// this pointer
// to identify color and instance variable

#include <iostream>
using namespace std;
class test
{
    int a, b; // insance variable
public:
    void getdata(int a, int b) // colour variable
    {
        this->a = a;
        this->b = b;
    }
    void showdata()
    {
        cout << a << endl
             << b;
    }
};

int main()
{
    test t1;
    t1.getdata(10, 20);
    t1.showdata();
    return 0;
}
