// chaitra 9 [ march 23 ]
// static data member and static member function
#include <iostream> // need to be fixed
using namespace std;
class student
{
public:
    int rollno;
    static int count;
    void getdata(int i)
    {
        rollno = i;
        count = count + 1;
    }
    void display()
    {
        cout << "Total students are " << count << endl;
    }
    static void display1()
    {
        cout << "total student are " << count << endl;
    }
};
int student::count = 0;
int main()
{
    student s1, s2;
    s1.getdata(5);
    s2.getdata(7);
    s2.getdata(4);
    s1.display();
    s2.display();
    student::display1();

    return 0;
}
