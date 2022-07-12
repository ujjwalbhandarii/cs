// binary operator overloading

#include <iostream>
using namespace std;

class rect
{
    int feet, inch;

public:
    void getdata()
    {
        cout << "enter feet" << endl;
        cin >> feet;
        cout << "enter inch";
        cin >> inch;
    }

    rect operator+(rect r2)
    {
        rect r3;
        r3.feet = feet + r2.feet;
        r3.inch = inch + r2.inch;
        r3.feet = r3.feet + (r3.inch / 12);
        r3.inch = r3.inch % 12;
        return r3;
    }

    void display()
    {
        cout << feet << " " << inch << endl;
    }
};

int main()
{
    rect r1, r2, r3;
    r1.getdata();
    r2.getdata();
    r3 = r2 + r1;

    r1.display();
    r2.display();
    r3.display();
    return 0;
}