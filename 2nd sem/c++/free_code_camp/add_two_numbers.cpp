#include <iostream>
using namespace std;

int sum(int a, int b) // another function
{
    int sum_1 = a + b;
    return sum_1;
}
int main() // main function
{
    int f_num{12}; // another way of storing a number
    cout << "1st number is: " << f_num << endl;
    // finding sum of two numbers using function
    int output = sum(10, 20);
    cout << "sum of two number is: " << output << endl;
    return 0;
}