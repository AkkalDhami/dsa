#include <iostream>

using namespace std;

int main()
{
  int arr[5] = {1, 2, 3, 5};

  int n = 5;

  int arrSum = 0;

  for (int i = 0; i < 4; i++)
  {
    arrSum += arr[i];
  }

  int numSum = n * (n + 1) / 2;

  cout << "Missing element: "
       << (numSum - arrSum) << endl;

  return 0;
}