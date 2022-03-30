// const object   { error }
#include <iostream>
using namespace std;
class test
{
public:
    int x;
    void showdata()
    {
        cout << x;
    }
};

int main()
{
    const test t1;
    t1.x = 50;
    t1.showdata();

    t1.x = 70;
    t1.showdata();
    return 0;
}