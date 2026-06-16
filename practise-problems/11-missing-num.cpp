#include <iostream>

using namespace std;

//? Leetcode 268: Missing Number

// Input: nums = [3,0,1]
// Output: 2
// Explanation:
// n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

int missingNumber(int nums[], int n)
{
    int i = 0;
    while (i < n)
    {
        int idx = nums[i];
        if (nums[i] < n && nums[i] != nums[idx])
        {
            swap(nums[i], nums[idx]);
        }
        else
        {
            i++;
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (nums[j] != j)
        {
            return j;
        }
    }
    return n;
}

int main()
{

    int arr[] = {3, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing no: " << missingNumber(arr, n) << endl;

    return 0;
}