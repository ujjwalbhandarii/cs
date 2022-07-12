
// finding maximum number using function template

/*
Create a function called swaps() that interchanges the values of the two arguments sent to it (pass these arguments by reference).  Make the function into a template, so it can be used with all numerical data types (char, int, float, and so on). Write a main() program to exercise the function with several types.
*/

#include <iostream>
using namespace std;

template <class T>
T max()
{
    T x, y, result;

    return result = (x > y) ? x : y;
}

int main()
{
    int a = 20, b = 30, c;
    c = max(a, b);
    cout << c;
}
