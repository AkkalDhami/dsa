#include <iostream>

using namespace std;

/*
? Binary Search:
-----------------
* Binary Search is a searching algorithm that works on a sorted array.

? Time Complexity:
 * Best case: O(1)
 * Worst case: O(log n)
 * Avg. case: O(log n)
 
? Space Complexity: O(1)

*/

int binarySearch(int arr[], int n, int x)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (-start + end) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int binarySearchDesc(int arr[], int n, int x)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (-start + end) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    int result = binarySearch(arr, n, x);

    if (result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index: " << result << endl;
    }

    int arr2[] = {5, 4, 3, 2, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int res = binarySearchDesc(arr2, n2, x);
    if (res == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index: " << res << endl;
    }

    return 0;
}