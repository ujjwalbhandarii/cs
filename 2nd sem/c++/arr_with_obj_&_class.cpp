// array with objects

#include <iostream>
using namespace std;
class arr
{
private:
    int reserve;

public:
    void setReserve(int a);
    int getreserve();
};

void arr::setReserve(int a)
{
    reserve = a;
}

int arr::getreserve()
{
    return reserve;
}
int main()
{
    arr myobj[4];

    for (int i = 1; i <= 5; i++)
    {
        myobj[i].setReserve(i); // redefining size ==> greater the loop.. more the size of a array
    }

    for (int i = 1; i <= 5; i++)
    {
        cout << "myobj[" << i << "].getReserve() :   " << myobj[i].getreserve() << endl;
    }
    return 0;
}

// with class

#include <iostream>
using namespace std;
const int size = 5;

class student
{
    int roll_no;
    // int marks[size];
    int marks[5];

public:
    void getdata();
    void tot_marks();
};

void student ::getdata()
{
    cout << "\nEnter roll no: ";
    cin >> roll_no;
    // for (int i = 0; i < size; i++)
    for (int i = 0; i < 5; i++)

    {
        cout << "Enter marks in subject" << (i + 1) << ": ";
        cin >> marks[i];
    }
};

// calculating total marks
void student ::tot_marks()
{
    int total = 0;
    // for (int i = 0; i < size; i++)
    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }
    cout << "\n\nTotal marks " << total;
};

int main()
{
    student stu;
    stu.getdata();
    stu.tot_marks();
}