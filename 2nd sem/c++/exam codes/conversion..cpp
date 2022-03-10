// wap user defined to user-defined data conversion

// bugs on code

#include <iostream>
using namespace std;
class Distance
{
    int meter;
    float centimeter;

public:
    Distance(int m, float c)
    {
        meter = m;
        centimeter = c;
    }

    int getmeter()
    {
        return meter;
    }

    int getcentimeter()
    {
        return centimeter;
    }
};

class Dist
{
    int feet, inch;

public:
    Dist(int f, int i)
    {
        feet = f;
        inch = i;
    }

    Dist(Distance d) /* 1st class and its object */
    {
        int m, c;
        m = d.getmeter();
        c = d.getcentimeter();
        feet = feet + inch / 12;
        inch = inch % 12;
    }

    void display()
    {
        cout << "Feet= " << feet << endl
             << "Inches= " << inch;
    }
};

int main()
{
    Distance d1(6, 40);
    Dist d2;
    d2 = d1;
    d2.display();
    return 0;
}