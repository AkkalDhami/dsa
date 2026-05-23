#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter nth term: ";
    cin >> n;

    int arr[20];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << "Fibonacci Series:\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nAns: "
         << arr[n - 1] << endl;

    return 0;
}