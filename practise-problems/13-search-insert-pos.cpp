#include <iostream>

using namespace std;

//? Leetcode 35. Search Insert Position
/*
Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4

*/

int searchInsert(int *nums, int numsSize, int target)
{
    int start = 0;
    int idx = numsSize;
    int end = numsSize - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            idx = mid;
            end = mid - 1;
        }
    }

    return idx;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int target = 5;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    cout << "Index: " << searchInsert(nums, numsSize, target) << endl;

    return 0;
}