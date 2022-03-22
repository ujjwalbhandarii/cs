/*
It is possible to pass arguments to constructors.
Typically, these arguments help initialize an object when it is created.
To create a parameterized constructor, simply add parameters to it the way you would to any other function.
When you define the constructor’s body, use the parameters to initialize the object.
*/

/************** parameterized constructors ************************/
#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    // Parameterized Constructor
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    // Constructor called
    Point p1(10, 15);

    // Access values assigned by constructor
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();

    return 0;
}

/****************** ANOTHER EXAMPLE *************************/
// C++ program to calculate the area of a wall

#include <iostream>
using namespace std;

// declare a class
class Wall
{
private:
    double length;
    double height;

public:
    // parameterized constructor to initialize variables
    Wall(double len, double hgt)
    {
        length = len;
        height = hgt;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    // create object and initialize data members
    Wall wall1(10.5, 8.6);
    Wall wall2(8.5, 6.3);

    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea();

    return 0;
}

/*
When an object is declared in a parameterized constructor, the initial values have to be passed as
arguments to the constructor function. The normal way of object declaration may not work.
The constructors can be called explicitly or implicitly.

 Example e = Example(0, 50); // Explicit call

 Example e(0, 50);           // Implicit call
Uses of Parameterized constructor:
It is used to initialize the various data elements of different objects with different values when they are created.
It is used to overload constructors.

*/