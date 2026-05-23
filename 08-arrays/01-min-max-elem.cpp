#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter no. of element: ";
    cin >> n;

    int arr[9999];
    cout << "Enter elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Max element: " << max << endl;
    cout << "Min element: " << min << endl;

    return 0;
}