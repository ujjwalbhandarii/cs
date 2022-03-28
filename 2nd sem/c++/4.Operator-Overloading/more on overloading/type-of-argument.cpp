// example of type of argument

#include <iostream>
using namespace std;

void max(int a)
{
    cout << a << endl;
}

void max(char character)
{
    cout << character << endl;
}

void max(double sus)
{
    cout << sus << endl;
}

int main()
{

    max(12);
    max('ujjwal');
    max(12.798);
    return 0;
}