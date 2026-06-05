#include <iostream>

using namespace std;

/*
? Insertion Sort:
-----------------
* Insertion Sort builds the sorted array one element at a time by inserting each element into its correct position.

----------------------------
* Time complexity:
----------------------------
* Best case: O(n)
* Worst case: O(n^2)
* Average case: O(n^2)

----------------------------
* Space complexity: O(1)
----------------------------
 */

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
}

void insertionSortDesc(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << endl;
}

int main()
{
    int arr[] = {51, 14, 33, 2, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    insertionSortDesc(arr, n);
    printArray(arr, n);

    return 0;
}