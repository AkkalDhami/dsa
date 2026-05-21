#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a no: ";
    cin >> n;

    int ans = 0;
    int mul = 1;
    int on = n;

    while (n != 0)
    {
        int rem = n % 8;
        n /= 8;

        ans += rem * mul;
        mul *= 10;
    }

    cout << "Octal no. of " << on << " : " << ans << endl;

    return 0;
}