#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Even numbers: " << endl;
    for (int i = 2; i <= n; i+=2)
    {
        cout << i << ", ";
    }

    return 0;
}