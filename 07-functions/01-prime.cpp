#include <iostream>

using namespace std;

int isPrime(int n = 0) // default parameter
{
    if (n < 2)
        return 0;

    if (n == 2)
        return 1;

    if (n % 2 == 0)
        return 0;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a prime no." << endl;
    else
        cout << n << " is not a prime no." << endl;

    return 0;
}