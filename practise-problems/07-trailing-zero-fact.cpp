#include <iostream>

using namespace std;

//* Leetcode: 172. Factorial Trailing Zeroes

//? 5 -> 120 ->  1


int trailingZero(int n)
{
    int count = 0;
    while (n >= 5)
    {
        int t = n / 5;
        count += t;
        n /= 5;
    }

    return count;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Trailing zeros in " << n << "! = " << trailingZero(n) << endl;

    return 0;
}