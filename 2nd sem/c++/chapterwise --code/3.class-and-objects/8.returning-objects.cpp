// returning object  -- 2022 march 22 ( bhuwan panthee )
#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    void getdata()
    {
        cout << "enter two numbers" << endl;
        cin >> a >> b;
    }

    test sum(test c)
    {
        test t3;
        t3.a = a + c.a;
        t3.b = b + c.b;
        return t3;
    }

    void display()
    {
        cout << a << "\t" << b << endl;
    }
};

int main()
{
    test t1, t2, t3;
    t1.getdata();
    t2.getdata();
    t3 = t2.sum(t1);
    t3.display();
    return 0;
}

/************************************************************************************************************/
// C++ program to show passing
// of objects to a function

#include <bits/stdc++.h>
using namespace std;

class Example
{
public:
    int a;

    // This function will take
    // an object as an argument
    void add(Example E)
    {
        a = a + E.a;
    }
};

// Driver Code
int main()
{

    // Create objects
    Example E1, E2;

    // Values are initialized for both objects
    E1.a = 50;
    E2.a = 100;

    cout << "Initial Values \n";
    cout << "Value of object 1: " << E1.a
         << "\n& object 2: " << E2.a
         << "\n\n";

    // Passing object as an argument
    // to function add()
    E2.add(E1);

    // Changed values after passing
    // object as argument
    cout << "New values \n";
    cout << "Value of object 1: " << E1.a
         << "\n& object 2: " << E2.a
         << "\n\n";

    return 0;
}
