#include <iostream>

using namespace std;

/*
* ? Selection Sort:
--------------------
? Selection Sort repeatedly selects the minimum element from the unsorted portion and places it at its correct position.

-----------------------
* Time complexity
-----------------------
* Best case: O(n^2)
* Worst case: O(n^2)
* Average case: O(n^2)

-----------------------
* Space complexity:
-----------------------
* Auxiliary space: O(1)
* Total space: O(n)
*/

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sortInAsc(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[idx])
            {
                idx = j;
            }
        }

        swap(arr[i], arr[idx]);
    }

    cout << "Sorted array(asc):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void sortInDesc(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[idx])
            {
                idx = j;
            }
        }

        swap(arr[i], arr[idx]);
    }

    cout << "Sorted array(desc):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void sortCharInAsc(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[idx])
            {
                idx = j;
            }
        }

        swap(arr[i], arr[idx]);
    }

    cout << "Sorted char array(asc):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

void sortCharInDesc(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[idx])
            {
                idx = j;
            }
        }

        swap(arr[i], arr[idx]);
    }

    cout << "Sorted char array(desc):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}

int main()
{

    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[999];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sortInAsc(arr, n);
    cout << endl;
    cout << endl;

    sortInDesc(arr, n);
    cout << endl;
    cout << endl;

    char charArr[5] = {'a', 'k', 'l', 'b', 'd'};
    int sz = sizeof(arr) / sizeof(arr[0]);
    sortCharInAsc(charArr, n);

    cout << endl;
    cout << endl;

    sortCharInDesc(charArr, n);

    return 0;
}