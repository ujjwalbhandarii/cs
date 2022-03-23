
/*
💣→→→→ Overloading Unary Operator:
Let us consider to overload (-) unary operator.
In unary operator function, no arguments should be passed. It works only with one class objects.
It is a overloading of an operator operating on a single operand.
Example:
Assume that class Distance takes two member object i.e. feet and inches, create a function by which
Distance object should decrement the value of feet and inches by 1 (having single operand of Distance Type).
*/

// C++ program to show unary operator overloading
#include <iostream>

using namespace std;

class Distance
{
public:
    // Member Object
    int feet, inch;

    // Constructor to initialize the object's value
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    // Overloading(-) operator to perform decrement
    // operation of Distance object
    void operator-()
    {
        feet--;
        inch--;
        cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch;
    }
};

// Driver Code
int main()
{
    // Declare and Initialize the constructor
    Distance d1(8, 9);

    // Use (-) unary operator by single operand
    -d1;
    return 0;
}

/*
In the above program, it shows that no argument is passed and no return_type value is returned, because unary operator works on a single operand.
s(-) operator change the functionality to its member function.
Note: d2 = -d1 will not work, because operator-() does not return any value.
*/
