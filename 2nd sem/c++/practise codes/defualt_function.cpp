// defualt function

#include <iostream>
using namespace std;
int testFunction(int a = 10, int b = 20)
{
    return a + b;
}

int main()
{
    cout << testFunction();
    return 0;
}