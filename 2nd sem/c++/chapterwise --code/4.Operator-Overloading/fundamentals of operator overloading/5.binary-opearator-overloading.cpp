/*
💣→→→→ Overloading Binary Operator :

    In binary
    operator overloading function,
    there should be one argument to be passed.It is overloading of an operator operating on two operands.*/

// C++ program to show binary operator overloading
#include <iostream>

using namespace std;

class Distance
{
public:
    // Member Object
    int feet, inch;
    // No Parameter Constructor
    Distance()
    {
        this->feet = 0;
        this->inch = 0;
    }

    // Constructor to initialize the object's value
    // Parameterized Constructor
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    // Overloading (+) operator to perform addition of
    // two distance object
    Distance operator+(Distance &d2) // Call by reference
    {
        // Create an object to return
        Distance d3;

        // Perform addition of feet and inches
        d3.feet = this->feet + d2.feet;
        d3.inch = this->inch + d2.inch;

        // Return the resulting object
        return d3;
    }
};

// Driver Code
int main()
{
    // Declaring and Initializing first object
    Distance d1(8, 9);

    // Declaring and Initializing second object
    Distance d2(10, 2);

    // Declaring third object
    Distance d3;

    // Use overloaded operator
    d3 = d1 + d2;

    // Display the result
    cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch;
    return 0;
}

/*
Here in the above program,
See Line no. 133, Distance operator+(Distance &d2), here return type of function is distance and it uses call by references to pass an argument.
See Line no. 160, d3 = d1 + d2; here, d1 calls the operator function of its class object and takes d2 as a parameter,
                  by which operator function return object and the result will reflect in the d3 object.
*/