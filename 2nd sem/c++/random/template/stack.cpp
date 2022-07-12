#include <iostream>
using namespace std;

template <class T>
class Stack
{
    int top;
    T st[100];

public:
    Stack()
    {
        top = -1;
    }

    void push(T i)
    {
        st[++top] = i;
    }

    T pop()
    {
        return st[top--];
    }
};

int main()
{

    return 0;
}