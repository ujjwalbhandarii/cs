// ambiguities in c++
//  occers when derived class has 2 base class and these 2 base class has single base class.
/*
                classA
           _______|__________
          |                  \
        classB              classC
          \                  |
           \________________|
                  |
                classD
*/

#include <iostream>
using namespace std;

class classA
{
public:
    int a;
    int z;
};

class classB : public classA
{
public:
    int b;
};

class classC : public classA
{
public:
    int c;
};

class classD : public classB, public classC
{
public:
    int d;
};

int main()
{
    classD myobj;
    // myobj.a = 10; // cannot be accessed as because of ambiguity in c++
    myobj.classB::a = 1; // can be accessed
    myobj.classB::z = 2;

    cout << "you entered " << endl
         << "a : " << myobj.classB::a << endl
         << "z : " << myobj.classB::z << endl;

    myobj.b = 3;
    myobj.c = 4;
    myobj.d = 5;

    cout << "b : " << myobj.b << endl;
    cout << "c : " << myobj.c << endl;
    cout << "d : " << myobj.d << endl;

    return 0;
}