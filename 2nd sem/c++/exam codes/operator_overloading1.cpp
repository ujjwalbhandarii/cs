// simple example of operator overloading

#include <iostream>
using namespace std;
class Person
{
    int age;
    string name;

public:
    Person() // constructor intilized
    {
        name = "ujjwal";
        age = 0;
    }

    friend ostream &operator<<(ostream &output, Person &p);
    friend istream &operator>>(istream &input, Person &p);
};

ostream &operator<<(ostream &output, Person &p)
{
    output << "what the heck" << endl;
    output << "my name is " << p.name << " and my age is " << p.age << endl;
    return output;
}

istream &operator>>(istream &input, Person &p)
{
    input >> p.name >> p.age;
    return input;
}

int main()
{
    cout << "enter the name and age" << endl;
    Person anil;
    cin >> anil;
    cout << anil;
    return 0;
}