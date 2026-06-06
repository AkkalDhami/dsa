#include <iostream>

using namespace std;

//? Leetcode: 231. Power of Two

int main()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;
    int ans = n > 0 && (n & (n - 1)) == 0;

    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}