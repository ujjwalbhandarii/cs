// Write a member function called reverseit() that reserves a string ( an array of characters ). use a for loop that swaps the first and last character, then the second and next-to last characters and so on. the string should be passed to a reverseit() as argument

// didnt produced desired output need to review later
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