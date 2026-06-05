#include <iostream>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << endl;
}

void cyclicSort(int arr[], int n)
{
    int i = 0;

    while (i < n)
    {
        int correctIdx = arr[i] - 1; //? value - 1
        if (arr[i] != arr[correctIdx])
        {
            swap(arr[i], arr[correctIdx]);
        }
        else
        {
            i++;
        }
    }
}

int main()
{

    int arr[] = {3, 5, 2, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cyclicSort(arr, n);
    printArray(arr, n);

    return 0;
}