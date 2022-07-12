#include <bits/stdc++.h>
using namespace std;

class Check
{
    string num;

public:
    void readBin(void);
    void checkBIn(void);
};

void Check::readBin()
{
    cout << "enter a binary number";
    cin >> num;
}

void Check::checkBIn()
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) != "0" && num.at(i) != "1")
        {
            cout << "invalid binary";
        }
    }
}
