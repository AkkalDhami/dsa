#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;
    bool isPrime = false;

    if (n < 2)
    {
        isPrime = false;
    }
    else if (n == 2)
    {
        isPrime = true;
    }
    else if (n % 2 == 0)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 3; i * i <= n; i+=2)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        isPrime = true;
    }

    if (isPrime)
    {
        cout << n << " is prime no" << endl;
    }
    else
    {
        cout << n << " is not prime no" << endl;
    }

    return 0;
}