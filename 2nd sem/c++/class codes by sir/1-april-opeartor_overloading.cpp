// uranary opeartor overloading

#include <iostream>
using namespace std;
class rectangle
{
    int length, breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void operator++()
    {
        ++length;
        ++breadth;
    }

    void display()
    {
        cout << length << "\t" << breadth << endl;
    }
};
int main()
{
    rectangle r1(10, 11);
    r1.display();
    ++r1;
    r1.display();
    return 0;
}