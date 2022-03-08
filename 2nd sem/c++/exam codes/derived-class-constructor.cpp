// program to show how construcors are invoked in derived class

#include <iostream>
using namespace std;

class alpha
{
    int x;

public:
    alpha(int i)
    {
        x = i;
        cout << "alpha intilalized \n";
    }

    void show_x()
    {
        cout << "x = " << x << endl;
    }
};

class beta
{
    float y;

public:
    beta(float j)
    {
        y = j;
        cout << "beta initailized" << endl;
    }

    void show_y()
    {
        cout << "y = " << y << endl;
    }
};

class gamma : public alpha, public beta
{
    int n, m;

public:
    gamma(int a, float b, int c, int d) : alpha(a), beta(b)
    {
        m = c;
        n = d;
        cout << "gamma intailized ";
    }

    void show_mn()
    {
        cout << "m = " << m << endl
             << "n = " << n;
    }
};
int main()
{
    gamma g(5, 7.65, 30, 100);
    cout << endl;

    g.show_x();
    g.show_y();
    g.show_mn();
    return 0;
}