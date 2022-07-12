#include <iostream>
using namespace std;

class ujjwal
{
    int a;

public:
    ujjwal(int x)
    {
        a = x;
    }
    void operator++(int)
    {
        a++;
    }
    void display()
    {
        cout << a;
    }
};

int main()
{
    class ujjwal u(2);
    u++;
    u.display();
}
