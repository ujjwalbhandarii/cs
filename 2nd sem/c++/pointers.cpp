// pointers

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 123;
    int *p;
    p = &a;                                                      // stores the memory loacation.
    cout << "P variable memory location is --> " << p << endl;   // display the p variable memory loaction
    cout << "Value of p is" << setw(21) << "--> " << *p << endl; // display the p data

    return 0;
}

// sample program
#include <iostream>
using namespace std;
int main()
{
    int a, *ptr;                                                                            // declaring
    a = 5;                                                                                  // storing
    ptr = &a;                                                                               // assining
    cout << "accesing value of 'a'with the help of pointer is: " << *ptr << endl;           // for value
    cout << "accesing memory location of 'a' with the help of pointer is: " << ptr << endl; // for location
}

// pointers in dynamic allocation
#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int;
    *ptr = 10;
    cout << "Value of ptr is: " << *ptr << endl; // gives value
    cout << "Value of ptr is: " << ptr << endl;  // gives memory location
    delete ptr;

    return 0;
}

/*

Program to store student result in pointer and display
--bhuwan sir

*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of std" << endl;
    cin >> num;

    float *ptr;
    ptr = new float[num]; // pointer decleration

    cout << "Enter the GPA of students" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << ":" << endl;
        cin >> *(ptr + i);
    }

    cout << "Displaying GPA of students " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "students " << i + 1 << ":" << *(ptr + 1) << endl;
    }
    delete[] ptr;
    return 0;
}