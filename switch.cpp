#include <iostream>
using namespace std;
int mul(int x, int y)
{
    return x * y;
}
int main()
{
    string name[20];
    int num, n, i;
label:
    cout << "enter your case" << endl;
    cin >> num;

    switch (num)
    {
        switch
            1 : cout << "enter your name" << endl;
        cin >> name >> endl;
        cout << "your name is :: " << name << endl;
        goto label;
        switch
            2 : cout << "enter a interger" << endl;
        cin >> n >> endl;
        for (i = 1; i <= 10; ++i)
        {
            printf("%d * %d = %d \n", n, i, n * i);
        }
        goto label;
        switch
            3 : cout << "my name is ujjwal" << endl;
        goto label;
    }
}