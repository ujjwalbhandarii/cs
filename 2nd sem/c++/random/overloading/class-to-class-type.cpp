// class to class type
// Write a program that illustrates the conversions between objects of different classes having conversion function in source object.
// Write a program that converts object of another distance class with data members feet and inch.(Assume 1m = 3.3 feet and 1cm = 0.4 inch)
#include <iostream>
using namespace std;

class distance
{
    // cgs class
    int feet, inch;

public:
    distance()
    {
        feet = 0;
        inch = 0;
    }

    distance(int f, int i)
    {
        feet = f;
        inch = i;
    }

    void display()
    {
        cout << feet << endl
             << inch;
    }
};

class dist
{
    // si class
    int meter, centimeter;

public:
    dist(int m, int c)
    {
        meter = m;
        centimeter = c;
    }

    operator distance()
    {
        distance d;
        int f, i;
        f = meter * 3.3;
        i = centimeter * 0.4;
        f = f + (i / 12);
        i = i % 12;
        return distance(f, i);
    }
};

int main()
{
    class distance d1;
    dist d2(4, 50);
    d2 = d1;
    d1.display();
    return 0;
}
