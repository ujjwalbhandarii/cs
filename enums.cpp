#include <iostream>
using namespace std;
enum day
{
    sun = 1,
    mon,
    tue,
    wed,
    thus,
    fri,
    sat
};
int main()
{
    day i = mon;
    cout << i;
    return 0;
}

// another
#include <iostream>
using namespace std;
enum captain
{
    ujjwal = 1,
    sid,
    ankit,
    prabesh
};
int main()
{
    captain cap = ujjwal;
    if (cap == ujjwal)
    {
        cout << "Ujjwal is captain and his value is " << ujjwal << endl;
    }
    return 0;
}

// another
#include <iostream>
using namespace std;
enum contest
{
    sid = 90,
    prabesh = 70,
    ankit = 80,
    ujjwal_1 = 100
};
int main()
{
    contest first;
    contest second;

    first = ujjwal_1;
    second = sid;

    if (first > second)
    {
        cout << "Ujjwal wins the race." << endl;
    }
    else
    {
        cout << "sid won" << endl;
    }
    return 0;
}

// enums with flags
#include <iostream>
using namespace std;

enum mobile
{
    batteryQ = 9,
    cameraQ = 2,
    audio = 3
};
int main()
{
    int feature = batteryQ | cameraQ;
    cout << feature;
    return 0;
}