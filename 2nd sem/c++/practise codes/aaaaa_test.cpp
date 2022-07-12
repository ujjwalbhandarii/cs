#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string.h>
using namespace std;
void reverseit(char s[100])
{
    int i, l;
    char temp;
    l = strlen(s);
    int j = l - 1;
    for (i = 0; i < l; i++)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        j--;
    }

    s[i] = '\0';
    cout << s;
}
int main()
{
    char st[100];
    cout << "enter any string";
    cin >> st;
    reverseit(st);
    return 0;
}