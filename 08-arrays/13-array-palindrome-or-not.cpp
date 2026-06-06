#include <iostream>

using namespace std;

bool isPalindrome(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int arr[] = {1, 2, 3, 2, 1};

    int size = sizeof(arr) / sizeof(arr[0]);

    if (isPalindrome(arr, size))
    {
        cout << "The array is a palindrome." << endl;
    }
    else
    {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}