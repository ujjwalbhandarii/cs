// chaitra 9 [ march 23 ]
// program to display nested class
#include <iostream>
using namespace std;
class student
{
    // these are private
    int roll;
    char name[30];

    class marks // another class initialization inside class name "student"
    {
        int a, b, c, d, e; // private member variables

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

public: // below this line is public for "student" class
    marks m1;
    void getinfo()
    {
        cout << "Enter roll no and name" << endl;
        cin >> roll >> name;
        m1.getmarks(); // function call
    }

    void displayinfo()
    {
        cout << roll << name;
        m1.display(); // function call
    }
};

int main()
{
    student s1;
    s1.getinfo();
    s1.displayinfo();
    return 0;
}
