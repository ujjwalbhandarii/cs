#include <iostream>
using namespace std;
class HUMAN
{
public:
    string NAME;
    int age;
};
class STUDENT : public HUMAN
{
public:
    int ROLLNO;
    string FACULTY;
};
class MARKS : public STUDENT
{
public:
    int MARK1;
    int MARK2;
    int MARK3;

    void enter_details()
    {
        cout << "Enter your Naam : ";
        cin >> NAME;
        cout << "Enter your Umer : ";
        cin >> age;
        cout << "Enter your RollNo : ";
        cin >> ROLLNO;
        cout << "Enter your FACULTY : ";
        cin >> FACULTY;
        cout << "Enter marks in 1st subject : ";
        cin >> MARK1;
        cout << "Enter marks in 2st subject : ";
        cin >> MARK2;
        cout << "Enter marks in 3st subject : ";
        cin >> MARK3;
    }
};
int main()
{
    MARKS m1;
    m1.enter_details();
    cout << "Naam : " << m1.NAME << endl;
    cout << "Umer : " << m1.age << endl;
    cout << "Roll no : " << m1.ROLLNO << endl;
    cout << "Faculty : " << m1.FACULTY << endl;
    cout << "Marks in 1st Subject : " << m1.MARK1 << endl;
    cout << "Marks in 2n Subject : " << m1.MARK2 << endl;
    cout << "Marks in 3rd Subject : " << m1.MARK3 << endl;

    return 0;
}