#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
    }

    return 0;
}