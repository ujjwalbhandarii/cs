// example of friend funtion
#include <iostream>
using namespace std;
class Box
{
    int length;

public:
    Box() : length(0) {} // way of writing function

    friend int lengthBox(Box b);
};

int lengthBox(Box b)
{
    b.length += 10; // 10 is add in a length.
    return b.length;
}

int main()
{
    Box b;
    cout << "length of a box:" << lengthBox(b) << endl;
    return 0;
}