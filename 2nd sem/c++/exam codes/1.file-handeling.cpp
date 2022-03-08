// wap that writes object to a file.

#include <iostream>
#include <fstream>
using namespace std;
class student
{
    char name[30];
    int age;

public:
    void getData()
    {
        cout << "enter the name ";
        cin.getline(name, 30);
        cout << "enter age ";
        cin >> age;
    }

    void showData()
    {
        cout << "your name is " << name << "and age is " << age << endl;
    }
};

int main()
{
    student s;
    ofstream file;
    file.write("aa.txt", ios::out);
    if (!file)
    {
        cout << "error in creating a file";
    }
    s.getData();
    file.write((char *)&s, sizeof(s));
    cout << "file is successfully created and closed";

    ifstream file1;
    file.open("aa.txt", ios::in);
    if (!file)
    {
        cout << "error" << endl;
    }
    file1.read((char *)&s, sizeof(s));
    s.showData();
    file1.close();

    return 0;
}