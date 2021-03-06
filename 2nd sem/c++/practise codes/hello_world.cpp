/*

insertion operator   ==>  "<<" ~ used to display output to screen.
extraction operator  ==> ">>" ~ used to capture user defined inputs.


*/

// hello world in c++
#include <iostream>
using namespace std;
int main()
{
    cout << "finally gcc is working." << endl;
    return 0;
}

// hello world using classes
#include <iostream>
using namespace std;
class info
{
public:
    void hello()
    {
        cout << "hello world" << endl;
    }
};
int main()
{
    info bye;
    bye.hello();
    return 0;
}

// function outside class
#include <iostream>
using namespace std;
class print
{
public:
    void output();
};
void print ::output()
{
    cout << "hello world";
}
int main()
{
    print a;
    a.output();
    return 0;
}