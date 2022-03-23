/*
The objects of a class can be passed as arguments to member functions as well as nonmember functions either by value
or by reference. When an object is passed by value, a copy of the actual object is created inside the function.
This copy is destroyed when the function terminates. Moreover, any changes made to the copy of the object
inside the function are not reflected in the actual object. On the other hand, in pass by reference,
only a reference to that object (not the entire object) is passed to the function.
Thus, the changes made to the object within the function are also reflected in the actual object.

Whenever an object of a class is passed to a member function of the same class, its data members can be accessed
inside the function using the object name and the dot operator.
However, the data members of the calling object can be directly accessed inside the function without using the object name
and the dot operator.
*/

// example code
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
        cout << hour << "\t" << min << endl;
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

/*****************************************************************************************************************/
// A program to demonstrate passing objects by value to a member function of the same class
#include <iostream>
class weight
{
    int kilogram;
    int gram;

public:
    void getdata();
    void putdata();
    void sum_weight(weight, weight);
};
void weight ::getdata()
{
    cout << "/nKilograms:";
    cin >> kilogram;
    cout << "Grams:";
    cin >> gram;
}
void weight ::putdata()
{
    cout << kilogram << " Kgs. and" << gram << " gros.\n";
}
void weight ::sum_weight(weight w1, weight w2)
{
    gram = w1.gram + w2.gram;
    kilogram = gram / 1000;
    gram = gram % 1000;
    kilogram += w1.kilogram + w2.kilogram;
}
int main()
{
    class weight w1, w2, w3; // weight w1, w2, w3;s
    cout << "Enter weight in kilograms and grams\n";
    cout << "\n Enter weight #1";
    w1.getdata();
    cout << " \n Enter weight #2";
    w2.getdata();
    w3.sum_weight(wl, w2); // throws issue.. need to debug
    cout << "/n Weight #1 = ";
    w1.putdata();
    cout << "Weight #2 = ";
    w2.putdata();
    cout << "Total Weight = ";
    w3.putdata();
    return 0;
}