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

    void display()
    {
        cout << length << "\t" << breadth << endl;
    }

    friend void operator++(rectangle &r);
};

void operator++(rectangle &r)
{
    ++r.length;
    ++r.breadth;
}

int main()
{
    rectangle r(10, 11);
    r.display();
    ++r;
    r.display();
    return 0;
}