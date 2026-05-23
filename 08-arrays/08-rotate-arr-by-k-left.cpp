#include <iostream>

using namespace std;

/*
Rotate array by k steps (left)

int arr[6] = {1, 2, 3, 4, 5, 6};
int k = 2;

output:
3, 4, 5, 6, 1, 2
*/

void reverse(int arr[], int i, int j)
{
    j = j - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k = 2;

    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    reverse(arr, i, n); // 6, 5, 4, 3, 2, 1
 
    reverse(arr, i, n - k);// 3, 4, 5, 6, 2, 1
  
    reverse(arr, n - k, n); // 3, 4, 5, 6, 1, 2
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}