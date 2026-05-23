#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter no. of element: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Elements are: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << endl
         << "size of arr: " << sizeof(arr) << endl;

    cout << "size of arr[0] elem: " << sizeof(arr[0]) << endl;
    
    cout << "length of arr: " << sizeof(arr) / sizeof(arr[0]) << endl;

    return 0;
}