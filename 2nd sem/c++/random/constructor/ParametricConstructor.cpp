// parametric constructor
#include <bits/stdc++.h>
using namespace std;

class Camal
{
    int a, b;

public:
    Camal(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << a << " " << b;
    }
};

int main()
{
    Camal c1(1, 2);
    c1.display();
}