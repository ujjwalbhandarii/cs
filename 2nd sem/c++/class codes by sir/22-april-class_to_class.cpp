// class to class conversion

// method to source class

#include <iostream>
using namespace std;

class rectangle
{
    int width, length, area;

public:
    rectangle(int w, int l)
    {
        width = w;
        length = l;
        area = length * width;
    }

    void output()
    {
        cout << area << endl;
    }
};

class traingle
{
    int base, height;
    float area;

public:
    traingle(int b, int h)
    {
        base = b;
        height = h;
        area = 0.5 * base * height;
    }

    void print()
    {
        cout << area << endl;
    }

    operator rectangle()
    {
        rectangle temp(base, height);
        return temp;
    }
};

int main()
{
    traingle t(10, 20);

    t.print();

    rectangle r = t;
    r.output();
    return 0;
}