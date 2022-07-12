// static storage class
#include <bits/stdc++.h>
using namespace std;

void showdata()
{
    static int a = 5;
    cout << ": " << a << endl;
    a += 5;
}

int main()
{
    showdata();
    showdata();
    showdata();
    return 0;
}