// array with objects

#include <iostream>
using namespace std;
class arr
{
private:
    int reserve;

public:
    void setReserve(int a);
    int getreserve();
};

void arr::setReserve(int a)
{
    reserve = a;
}

int arr::getreserve()
{
    return reserve;
}
int main()
{
    arr myobj[4];

    for (int i = 1; i <= 5; i++)
    {
        myobj[i].setReserve(i); // redefining size ==> greater the loop.. more the size of a array
    }

    for (int i = 1; i <= 5; i++)
    {
        cout << "myobj[" << i << "].getReserve() :   " << myobj[i].getreserve() << endl;
    }
    return 0;
}