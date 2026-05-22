#include <iostream>

using namespace std;

// 153

// Digits = 1, 5, 3
// Total digits = 3

// 1³ + 5³ + 3³
// = 1 + 125 + 27
// = 153

int isArmstrong(int n)
{
    int temp = n;

    int digit = 0;
    while (temp > 0)
    {
        temp /= 10;
        digit++;
    }
    temp = n;

    int ans = 0;
    while (temp > 0)
    {
        int rem = temp % 10;
        int pow = rem;
        for (int i = 1; i < digit; i++)
        {
            pow *= rem;
        }
        ans += pow;
        temp /= 10;
    }

    return ans == n;
}

int main()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;

    if (isArmstrong(n))
    {
        cout << n << " is armstrong no.";
    }
    else
    {
        cout << n << " is not armstrong no.";
    }

    return 0;
}