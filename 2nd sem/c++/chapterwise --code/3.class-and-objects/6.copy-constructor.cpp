/*
A copy constructor is a member function which initializes an object using another object of the same class.
Detailed article on Copy Constructor.

Whenever we define one or more non-default constructors( with parameters ) for a class,
a default constructor( without parameters ) should also be explicitly defined as the compiler
will not provide a default constructor in this case. However, it is not necessary but it’s considered to be the best
practice to always define a default constructor.

*/

//************************* COPY CONSTRUCTOR *******************************
#include <iostream>
using namespace std;

// declare a class
class Wall
{
private:
    double length;
    double height;

public:
    // initialize variables with parameterized constructor
    Wall(double len, double hgt)
    {
        length = len;
        height = hgt;
    }

    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(Wall &obj)
    {
        length = obj.length;
        height = obj.height;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    // create an object of Wall class
    Wall wall1(10.5, 8.6);

    // copy contents of wall1 to wall2
    Wall wall2 = wall1;

    // print areas of wall1 and wall2
    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea();

    return 0;
}

//************************** copy constructor ********************************
#include <iostream>
using namespace std;

class person
{
    int age;
    string name;
    string lover;

public:
    person(int a, string n, string l) // parameteric constructior
    {
        age = a;
        name = n;
        lover = l;
    }

    person(person &p1) // another constructor copying value of parametric constructor
    {
        age = p1.age;
        name = p1.name;
        lover = p1.lover;
    }

    void display()
    {
        cout << age << endl;
        cout << name << endl;
        cout << lover << endl;
    }
};

int main()
{
    person p(12, "ujjwal", "searching");
    cout << "Values in p " << endl;
    p.display();

    person p1(p); // copying p obj into p1 obj
    cout << endl
         << "Values inside p1" << endl;
    p1.display();

    return 0;
}