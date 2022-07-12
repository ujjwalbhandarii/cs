#include <iostream>
using namespace std;
class time
{
    int hour, min;

public:
    void getdata(int h, int m)
    {
        hour = h;
        min = m;
    }

    void addtime(time t1, time t2)
    {
        hour = t1.hour + t2.hour;
        min = t1.min + t2.min;
        hour = hour + min / 60;
        min = min % 6;
    }

    void display()
    {
        cout << hour << "/t" << min << endl;
    }
};

int main()
{
    class time t1, t2, t3;
    t1.getdata(5, 40);
    t2.getdata(6, 25);
    t3.addtime(t1, t2);
    t1.display();
    t2.display();
    t3.display();

    return 0;
}
