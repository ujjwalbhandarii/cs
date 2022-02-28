/*Write a program that converts
object of another distance class with data members feet and inch.
(Assume 1m = 3.3 feet and 1cm = 0.4 inch)
*/
#include <iostream>
using namespace std;
class distance_1
{
    double inch, feet;

public:
    void conversion()
    {
        int num;
        cout << "choose one ";
        cin >> num;

        switch (num)
        {
        case 1:
            cout << "inch to feet" << endl;
            cout << "Enter inch :  ";
            cin >> feet;
            feet = inch / 12;
            cout << "\nFEET :  " << feet << endl;
            break;

        case 2:
            cout << "feet to inch" << endl;
            cout << "Enter feet :  ";
            cin >> feet;
            inch = 12 * feet;
            cout << "\nINCH :  " << inch << endl;

        default:
            break;
        }
    }
};
int main()
{
    distance_1 d;
    d.conversion();
    return 0;
}