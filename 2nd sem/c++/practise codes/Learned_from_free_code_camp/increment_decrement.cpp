#include <iostream>
using namespace std;
int main()
{
    // Increment and decrement operator.

    cout << endl;

    int value{5};
    value++;
    cout << "Incremented value is: " << value << endl; // output 6

    value = 5; // reassining value
    value--;
    cout << "Decremented value is: " << value << endl; // output 4

    value = 5; // reassining
    ++value;
    cout << "Post decrement value is: " << value << endl; // output 6

    value = 5; // reassining
    --value;
    cout << "Pre decrement value is: " << value << endl; // output 4

    // ***********************************************************************************************************************

    cout << endl
         << endl;

    cout << "ANOTHER APPROCH" << endl;

    int val{2};
    cout << "Incremented in this line and our val is: " << val++ << endl; // output 2
    cout << "After incrementing our value is: " << val << endl;           // output is 3

    val = 2;
    cout << "Decremented in this line and our val is: " << val-- << endl; // output 2
    cout << "After decrementing our value is: " << val << endl;           // output is 1

    cout << endl
         << endl;

    return 0;
}