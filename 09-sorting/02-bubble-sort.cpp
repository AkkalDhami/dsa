#include <iostream>

using namespace std;

/*
* Bubble sort:
---------------
? Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

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

void bubbleSortAscWorst(int arr[], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array(asc):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void bubbleSortAscFromLast(int arr[], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = false;
        for (int j = i; j >= 0; j--)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    cout << "Sorted array(asc) from last(small):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void bubbleSortAscBest(int arr[], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = false;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    cout << "Sorted array(asc):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void bubbleSortAscChar(char arr[], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = false;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    cout << "Sorted char array(asc):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void bubbleSortDesc(int arr[], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        bool swapped = false;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }

    cout << "Sorted array(desc):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    // int arr[5] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    // bubbleSortAscWorst(arr, n);

    // cout << endl;
    // cout << endl;
    // bubbleSortDesc(arr, n);

    // cout << endl;
    // cout << endl;
    // bubbleSortAscBest(arr, n);

    cout << endl;
    cout << endl;

    char charArr[5] = {'a', 'k', 'l', 'b', 'd'};
    int sz = sizeof(charArr) / sizeof(charArr[0]);
    bubbleSortAscChar(charArr, sz);

    cout << endl;
    cout << endl;

    bubbleSortAscFromLast(arr, n);

    return 0;
}
