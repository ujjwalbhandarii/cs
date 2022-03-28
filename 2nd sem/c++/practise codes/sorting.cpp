// sorting in cpp
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;

  int arr[n];

  // entry
  for (int i = 0; i < n; i++)
  {

    cin >> arr[i];
  }

  // shorting
  int temp;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {

      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  // printing
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}
