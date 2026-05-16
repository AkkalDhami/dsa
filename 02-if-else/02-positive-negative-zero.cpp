#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";

    cin >> n;

    if (n > 0)
    {
        cout << n << " is positive no." << endl;
    }
    else if (n < 0)
    {
        cout << n << " is negative no." << endl;
    }
    else
    {
        cout << n << " is zero no." << endl;
    }

    return 0;
}