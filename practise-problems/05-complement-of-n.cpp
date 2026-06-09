#include <iostream>

using namespace std;

//? Leetcode: 1009. Complement of Base 10 Integer
// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.

int main()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;

    if(n == 0){
        cout << "Complement of 0 is 1" << endl;
        return 0;
    }

    int ans = 0;
    int mul = 1, temp = n;
    
    while (temp)
    {
        int rem = temp % 2;
        temp /= 2;
        rem = rem ^ 1;
        ans += rem * mul;
        mul *= 2;
    }

    cout << "Complement of " << n << " is " << ans << endl;

    return 0;
}