#include <iostream>

using namespace std;

//? Leetcode: 7. Reverse Integer

int main()
{
    int x;
    cout << "Enter a no: ";
    cin >> x;
    int rem, ans = 0;
    while (x != 0)
    {
        rem = x % 10;
        x /= 10;
        if (ans > INT8_MAX / 10 || ans < INT8_MIN / 10)
        {
            cout << "Overflow" << endl;
            return 0;
        };
        ans = ans * 10 + rem;
    }

    cout << "Reversed no: " << ans << endl;

    return 0;
}