#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter total no of student";
    cin >> num;

    float *ptr;

    ptr = new float[num];

    cout << "enter gpa of students" << endl;

    for (int i; i < num; ++i)
    {
        cout << "student" << i + 1 << ":";
        cin >> *(ptr + i);
    }

    cout << "\n Displaying GPA of students" << endl;

    for (int i = 0; i < num; ++i)
    {
        cout << "student" << i + 1 << ":" << *(ptr + i) << endl;
    }

    // ptr memory is released
    delete[] ptr;
    return 0;
}