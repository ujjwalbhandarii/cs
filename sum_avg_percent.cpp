// program to calculate sum of marks of 5 students and also find their average and percentage

#include <iostream>
using namespace std;
int main()
{
    int mark[5], i;
    float sum = 0, avg, percent;
    for (i = 1; i <= 5; i++)
    {
        cout << "Enter the marks of " << i << " student :: ";
        cin >> mark[i];
        sum += mark[i];
    }

    avg = sum / 5;
    percent = (sum / 500) * 100;

    cout << "Average mark of 5 students is " << avg << endl;
    cout << "Percentage of 5 students is " << percent << " %" << endl;
    return 0;
}