#include <iostream>

using namespace std;

//? Leetcode: 283. Move Zeroes

/**
Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]


Example 2:

Input: nums = [0]
Output: [0]

 */

void moveZeroes(int arr[], int n)
{
    int nz = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[nz];
            arr[nz] = temp;
            nz++;
        }
    }
}

int main()
{
    int n = 5;

    int arr[5] = {1, 0, 0, 3, 12};

    moveZeroes(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}