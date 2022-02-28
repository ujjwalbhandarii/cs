#include <iostream>
using namespace std;
int main()
{
    string f_name;
    cout << "enter your name: ";
    getline(cin, f_name); // another to get data ==>             getline(where the data is going, variable name)
    cout << "your name is " << f_name;
    return 0;
}