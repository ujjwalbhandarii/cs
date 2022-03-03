/*
    WAP that illustrates the conversion between objects of different class having conversion function in source object.
--> This conversion is like conversion of user defined type ie. overloading the cast operator is used.
    eg: class obj A ;
        class obj B;
        obj A = obj B
*/

#include <iostream>
#include <cmath> //require to use trigometric functions
using namespace std;
// 1st class
class Cartesian
{
    float xco, yco;

public:
    Cartesian()
    {
        xco = 0;
        yco = 0;
    }

    Cartesian(float x, float y)
    {
        xco = x;
        yco = y;
    }

    void display()
    {
        cout << "(" << xco << " , " << yco << ")";
    }
};

// 2nd class
class Polar
{
    float radius, angle;

public:
    Polar()
    {
        radius = 0;
        angle = 0;
    }

    Polar(float rad, float ang)
    {
        radius = rad;
        angle = ang;
    }

    // 1st class operator intilization
    operator Cartesian()
    {
        float x = static_cast<int>(radius * cos(angle));
        float y = static_cast<int>(radius * sin(angle));
        return Cartesian(x, y);
    }

    void display()
    {
        cout << "(" << radius << " , " << angle << ")";
    }
};

int main()
{
    Polar pol(10.0, 0.78);
    Cartesian cart;
    cart = pol;
    cout << "\nGiven Polar: ";
    pol.display();
    cout << "\nEquivalent Cartesian: ";
    cart.display();
    return 0;
}

/*
the output of the partation is:

Give Polar:(10.0, 0.78)
Equivalent Cartesian(7,7)
*/