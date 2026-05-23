#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Enter no. of element: ";
  cin >> n;

  int arr[999];
  cout << "Enter elements: \n";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int num;
  cout << "Enter number to search: ";
  cin >> num;

  int ind = -1;
  bool isFound = false;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == num)
    {
      isFound = true;
      ind = i;
      break;
    }
  }

  if (!isFound)
    cout << "Element not found" << endl;
  else
    cout << "Element found at index: " << ind << endl;

  return 0;
}