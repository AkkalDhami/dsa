#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a octal no: ";
    cin >> n;

    int ans = 0;
    int mul = 1;
    int on = n;

    while (n != 0)
    {
        int rem = n % 10;
        if (rem < 0 || rem > 7)
        {
            cout << "Invalid octal no." << endl;
            return 0;
        }
        n /= 10;

        ans += rem * mul;
        mul *= 8;
    }

    cout << "Decimal no. of " << on << " : " << ans << endl;

    return 0;
}