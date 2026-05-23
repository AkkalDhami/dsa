#include <iostream>

using namespace std;

int insertion(int arr[], int totalSize, int currSize, int num, int idx)
{
    if (totalSize <= currSize)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    for (int i = totalSize - 1; i >= idx; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[idx] = num;
    return 1;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6};
    int totalSize = sizeof(arr) / sizeof(arr[0]);
    int currentSize = 6;
    insertion(arr, totalSize, currentSize, 7, 3);
    currentSize++;
    printArray(arr, currentSize);

    return 0;
}