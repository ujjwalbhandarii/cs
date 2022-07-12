// program to write in a file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char text[100];
    fstream file;
    file.open("example.txt", (ios::out));
    cout << "enter a message ";
    cin.getline(text, 100);
    file << text;
    file.close();
    return 0;
}