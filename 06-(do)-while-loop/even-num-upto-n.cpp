#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int i = 1;
    cout << "Even numbers upto " << n << ":\n";
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << ", ";
        }
        i++;
    }

    return 0;
}