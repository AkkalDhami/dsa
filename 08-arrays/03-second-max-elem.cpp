#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Enter no. of element: ";
  cin >> n;

  int arr[9999];
  cout << "Enter elements: \n";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int max = INT8_MIN, smax = INT8_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      smax = max;
      max = arr[i];
    }
    else if (arr[i] > smax && arr[i] != max)
    {
      smax = arr[i];
    }
  }

  cout << "Second max element: " << (smax == INT8_MIN ? -1 : smax) << endl;

  return 0;
}