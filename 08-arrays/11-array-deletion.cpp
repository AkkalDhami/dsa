#include <iostream>

using namespace std;

int deletion(int arr[], int size, int idx)
{
    if (size <= idx)
    {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    for (int i = idx; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

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
    int size = 6;
    deletion(arr, size, 0);
    size--;
    printArray(arr, size);

    return 0;
}