// this code is for to check wheather our c++ 20 is working

#include <iostream>
using namespace std;
int main()
{
    auto result = (10 <=> 20) > 0;
    cout << result << endl;
    return 0;
}