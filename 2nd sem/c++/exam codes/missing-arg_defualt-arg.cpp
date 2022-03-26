// Explain how missing arguments and defualt arguments are handeled by the functions simulatneously

#include <iostream>
using namespace std;
float interest(int p, int t = 5, float r = 5.0);
int main()
{
    float rate, i1, i2, i3;
    int pr, yr;

    cout << "Enter the principal, Rate and Year" << endl;
    cin >> pr >> rate >> yr;

    i1 = interest(pr, yr, rate);
    i2 = interest(pr, yr);
    i3 = interest(pr);

    cout << i1 << i2 << i3; // displaying

    return 0;
}

float interest(int p, int t, float r)
{
    return ((p * t * r) / 100);
}

/*
in the above program, t and r has defualt arguents.
if we give, as input, values for pr, rate and yr as 5000, 10 and 2, the output will be

1000 200 1250
*/