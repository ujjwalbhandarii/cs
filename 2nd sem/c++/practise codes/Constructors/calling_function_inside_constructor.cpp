
// (calling function inside constructor )
#include <iostream>
using namespace std;
class ujjwal
{
public:
    ujjwal();     // initialization of constructor
    int demand(); // intialization of function
};

ujjwal::ujjwal() // constructor
{
    demand(); // function call
}

int ujjwal::demand() // function outside class
{
    cout << "Demand function is working." << endl;
}
int main()
{
    ujjwal u; // class_name and constructor.
    return 0;
}
