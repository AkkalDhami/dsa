#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter no. of element: ";
    cin >> n;

    int arr[n], sum = 0;
    cout << "Enter elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;

    return 0;
}