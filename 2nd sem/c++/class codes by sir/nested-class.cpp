// chaitra 9 [ march 23 ]
// program to display nested class
#include <iostream> // need to be fixed
using namespace std;
class student
{
    int roll;
    char name[30];
    class marks
    {
        int a, b, c, d, e;

    public:
        void getmarks()
        {
            cout << "enter mark of 5 subject" << endl;
            cin >> a >> b >> c >> d >> e;
        }
        void display()
        {
            cout << a << b << c << d << e;
        }
    };

    marks m1;
    void getinfo()
    {
        cout << "Enter roll no and name" << endl;
        cin >> roll >> name;
        m1.getmark();
    }

    void displayinfo()
    {
        cout << roll << name;
        m1.display();
    }
};

int main()
{
    student s1;
    s1.getinfo();
    s1.displayinfo();
    return 0;
}
