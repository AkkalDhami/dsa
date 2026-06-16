#include <iostream>

using namespace std;

int countNumbers(int *arr, int size, int target)
{
    int start = 0, end = size - 1;

    int first = -1, last = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1; // move to left <---
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    start = 0;
    end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return (last - first) + 1;
}

int main()
{

    int arr[] = {-3, -2, -1, 1, 2, 1, 2, 0, 0, 0, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    cout << "Count of " << target << ": " << countNumbers(arr, size, target) << endl;

    return 0;
}