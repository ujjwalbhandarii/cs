// constructors
#include <iostream>
using namespace std;
class Ujjwal
{
public:
    string f_1;
    string f_2;
    string f_3;
    int months;
    Ujjwal(string x, string y, string z, int w)
    {
        f_1 = x;
        f_2 = y;
        f_3 = z;
        months = w;
    }
};

int main()
{
    Ujjwal myobj1("ankit", "prabesh", "siddharth", 8);
    Ujjwal myobj2("bad", "bad", "bad", 8);

    cout << endl;
    cout << "we are " << myobj1.f_1 << ", " << myobj1.f_2 << ", " << myobj1.f_3 << " and ujjwal." << endl;
    cout << "        "
         << "    "
         << "     "
         << "    "
         << "     "
         << "    "
         << "     "
         << "    " << endl;
    cout << "        "
         << "|    "
         << "     "
         << "|    "
         << "     "
         << "|    "
         << "     "
         << "|    " << endl;
    cout << "        "
         << "    "
         << "     "
         << "    "
         << "     "
         << "    "
         << "     "
         << "    " << endl;
    cout << "       " << myobj2.f_1 << "       "
         << myobj2.f_2 << "       "
         << myobj2.f_3 << "      "
         << "good boy "
         << endl;
    cout << endl;

    return 0;
}