// returning object  -- 2022 march 22 ( bhuwan panthee )
#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    void getdata()
    {
        cout << "enter two numbers" << endl;
        cin >> a >> b;
    }

    test sum(test c)
    {
        test t3;
        t3.a = a + c.a;
        t3.b = b + c.b;
        return t3;
    }

    void display()
    {
        cout << a << "\t" << b << endl;
    }
};

int main()
{
    test t1, t2, t3;
    t1.getdata();
    t2.getdata();
    t3 = t2.sum(t1);
    t3.display();
    return 0;
}