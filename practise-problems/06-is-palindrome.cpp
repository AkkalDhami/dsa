#include <iostream>

using namespace std;

//? Leetcode: 9. Palindrome Number

int main()
{
    int x;
    cout << "Enter a no: ";
    cin >> x;
    int rem, ans = 0;
    int temp = x;
    while (x != 0)
    {
        rem = x % 10;
        x /= 10;
        ans = ans * 10 + rem;
    }

    if (ans == temp && temp >= 0)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}