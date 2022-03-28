#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

string keypadkey[10] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypadarr(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string key = keypadkey[(ch - '0')];

    for (int i = 0; i < key.length(); i++)
    {
        keypadarr(s.substr(1), key[i] + ans);
    }
}

int main()
{
    keypadarr("23", "");
    return 0;
}