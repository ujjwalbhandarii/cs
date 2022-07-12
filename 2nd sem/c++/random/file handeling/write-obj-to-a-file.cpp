// program that writes object to a file
#include <iostream>
#include <fstream>
using namespace std;
class myclass
{
public:
    int name, age;
    void setdata()
    {
        cout << "enter your name ";
        cin >> name;
        cout << "enter your age";
        cin >> age;
    }
    void display()
    {
        cout << "your name is" << name << endl
             << "and your age is " << age << endl;
    }
};

int main()
{

    myclass c;

    fstream file;
    file.open("name.txt", (ios::out));
    if (!file)
    {
        cout << "file cannot be created";
    }
    c.setdata();                       // reads
    file.write((char *)&c, sizeof(c)); // writes object to a file
    file.close();

    // reading a file
    fstream file1;
    file1.open("name.txt", (ios::in)); // in read mode
    if (!file)
    {
        cout << "error in openaning file";
    }

    file1.read((char *)&c, sizeof(c));
    c.display();
    file1.close();
    return 0;
}