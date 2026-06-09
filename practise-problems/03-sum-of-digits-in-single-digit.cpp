#include <iostream>

using namespace std;

//? Leetcode: 258. Add Digits

//* Input: 1234
//* Output: 1

int main()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;

    while (n > 9)
    {
        int sum = 0;
        while (n != 0)
        {
            int rem = n % 10;
            n /= 10;
            sum += rem;
        }
        n = sum;
    }

    cout << "Sum of digits in single digit: " << n << endl;

    return 0;
}