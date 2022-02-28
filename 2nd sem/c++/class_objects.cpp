// more on class and objects
#include <iostream>
using namespace std;

class car
{
public:
    int maxSpeed;
    int speed();
};

int car::speed()
{
    cout << " Max speed of the car is " << maxSpeed;
}

int main()
{
    car s;
    cout << "enter the max speed: ";
    cin >> s.maxSpeed;
    s.speed();
    return 0;
}

// different approch
#include <iostream>
using namespace std;
class car1
{
public:
    int speed(int maxspeed);
};
int car1::speed(int maxSpeed)
{
    return maxSpeed;
}
int main()
{
    car1 c;
    cout << c.speed(200);
    return 0;
}

// multiplacation table
#include <iostream>
using namespace std;
class mul
{
public:
    int inte;
    int mult()
    {
        cout << "Enter an integer: ";

        cin >> inte;
        cout << "Multiplacatation table for"
             << " " << inte << " "
             << "is" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << inte << " * " << i << " = "
                 << " " << inte * i << endl;
        }
    }
};
int main()
{
    mul m;
    m.mult();
    return 0;
}