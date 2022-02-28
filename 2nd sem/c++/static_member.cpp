#include <iostream>
using namespace std;
class Box
{
private:
    double length;
    double breathe;
    double height;

public:
    static int objectCount;
    Box(int l, int b, int h) // constructor
    {
        length = l;
        breathe = b;
        height = h;
        objectCount++; // increase everytime when object is created.
    }

    int output()
    {
        return length * breathe * height;
    }
};

int Box::objectCount = 0; // initialize static member of class
int main()
{
    Box b1(2, 2, 2);
    Box b2(1, 1, 1);
    cout << b1.output() << endl;
    cout << b2.output() << endl;
    cout << Box::objectCount << endl; // gives object count
    return 0;
}