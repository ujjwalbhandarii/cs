/*
Create a class Stack with suitable data members and member functions to push and pop the elements of the stack.
Add the exception when user tries to add item while the stack is full and when user tries to delete item while
the stack is empty. Throw exception in both of the cases and handle these exception.
*/

#include <iostream>
using namespace std;

class Stack
{
    int top;

public:
    int a[5]; // Maximum size of Stack

    Stack() // constructor
    {
        top = -1;
    }

    void push(int x)

    {

        if (top < 5) // -1 < 5
        {

            a[++top] = x;
            cout << "Element Inserted \n";
        }
        else
        {

            throw "Stack is full. You cannot insert the item!!!";
        }
    }

    int pop()
    {
        if (top >= 0)
        {
            int d = a[top--];
            return d;
        }
        else
        {
            throw "Stack is empty. You cannot pop the item!!!";
        }
    }
};

int main()
{
    int item;
    Stack s1;
    int ch = 1;
    cout << "\n1.PUSH\n2.POP\n3.EXIT";
    cout << "\nEnter your choice:";
    cin >> ch;

    do
    {
        switch (ch)
        {
        case 1:

            cout << "\nEnter the item to push:";

            cin >> item;

            try
            {
                s1.push(item);
            }

            catch (const char *e)

            {

                cout << e << endl;
            }

            break;

        case 2:

            try

            {

                cout << "\nPoped Item is:" << s1.pop();
            }

            catch (const char *e)

            {

                cout << e << endl;
            }

            break;

        case 3:

            exit(0);
        }

        cout << "\nEnter your choice:";

        cin >> ch;

    } while (ch < 4);

    return 0;
}
