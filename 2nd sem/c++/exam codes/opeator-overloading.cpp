// operator overloading

#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    friend ostream &operator<<(ostream &output, Distance &d)
    {
        output << "F : " << d.feet << endl
               << "I : " << d.inches << endl;
        return output;
    }

    friend istream &operator>>(istream &input, Distance &d)
    {
        input >> d.feet >> d.inches;
        return input;
    }
};

int main()
{
    Distance d1(11, 10), d2(5, 11), d3;
    cout << "entr the value of third object ";
    cin >> d3;

    cout << "First distance " << endl
         << d1 << endl;
    cout << "Second distance " << endl
         << d2 << endl;
    cout << "Third distance " << endl
         << d3 << endl;
    return 0;
}