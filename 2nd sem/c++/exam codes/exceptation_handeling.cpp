// exceptaton handeling

#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if (x == 0)
            throw x;
        if (x == 1)
            throw 1.0;
    }
    catch (int m)
    {
        cout << "Caught an integer" << endl;
    }
    catch (double d)
    {
        cout << "Caught a double";
    }
}
int main()
{
    test(0);
    test(1);
    test(2);

    return 0;
}

/*
output:

caught an integer
caught a double
*/