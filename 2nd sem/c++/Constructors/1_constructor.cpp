/*
To create a constructor, use the same name as the class, followed by parentheses ()

*/

// simple constructor code.
#include <iostream>
using namespace std;
class print
{
public:
    print()
    {
        cout << "hello world";
    }
};
int main()
{
    print car; // this is called constructor
    return 0;
}