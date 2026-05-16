#include <iostream>

using namespace std;

int main()
{
    int base, power;
    cout << "Enter a base: ";
    cin >> base;
    cout << "Enter a power: ";
    cin >> power;

    int res = base;

    for (int i = 1; i < power; i++)
    {
        res = res * base;
    }
    cout << base << "^" << power << " = " << res << endl;

    return 0;
}