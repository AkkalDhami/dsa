#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;

    int ans;
    
    for (int i = 1; i <= n; i++)
    {
        if (i * i <= n)
        {
            ans = i;
        }
    }

    cout << "Square root of " << n << " is " << ans << endl;


    return 0;
}