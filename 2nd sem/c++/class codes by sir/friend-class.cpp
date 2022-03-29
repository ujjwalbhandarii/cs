// friend class

#include <iostream>
using namespace std;
class test
{
    int x;

public:
    void getdata(int d)
    {
        x = d;
    }
    friend class test1; // friend class initialization
};

class test1
{
public:
    void showdata(test t)
    {
        cout << t.x;
    }
};

int main()
{
    test t1;
    t1.getdata(20);

    test1 t2;
    t2.showdata(t1);
    return 0;
}