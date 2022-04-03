// dynamic constructor

#include <iostream>
using namespace std;
class test
{
    int size, s, l;
    int *p;

public:
    test(int s)
    {
        size = s;
        p = new int[size];
    }

    void getdata()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> p[i];
        }
    }

    void showdata()
    {
        for (int i = 0; i < size; i++)
        {
            cout << p[i];
        }
    }
};
int main()
{
    int s;
    cout << "enter size" << endl;
    cin >> s;

    test t1(s);
    t1.getdata();
    t1.showdata();
    return 0;
}