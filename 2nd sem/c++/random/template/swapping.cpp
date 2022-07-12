/*
Create a function called swaps() that interchanges the values of the two arguments sent to it (pass these arguments by reference).
Make the function into a template, so it can be used with all numerical data types (char, int, float, and so on).
Write a main() program to exercise the function with several types.
*/

#include <iostream>
using namespace std;

template <class T>
void swapper(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 1, y = 2;

    cout << endl
         << "before swapping" << endl;
    cout << x << " " << y << endl;
    swapper(x, y); // pass by refrence

    cout << endl
         << "after swapping" << endl;

    cout << x << " " << y << endl;
    return 0;
}