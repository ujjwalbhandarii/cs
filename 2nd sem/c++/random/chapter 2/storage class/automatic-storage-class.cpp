

#include <iostream>
using namespace std;
void showdata()
{
    auto a = 5;
    cout << ": " << a << endl;
    a += 5; // this line is useless because new value of a is allocated after each termination
}
int main()
{
    showdata();
    showdata();
    showdata();
    return 0;
}