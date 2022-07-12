// basic to obj type conversion
// basic to class type conversion
#include <iostream>
using namespace std;

class rect
{
    int feet, inch;

public:
    rect(float m)
    {
        feet = (int)m;
        inch = 12 * (m - feet);
    }

    void display()
    {
        cout << inch << endl;
    }
};
int main()
{
    float f = 2.5;

    rect r = f;
    r.display();
    return 0;
}