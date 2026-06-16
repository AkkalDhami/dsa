#include <iostream>

using namespace std;

//? Leetcode 34. Find First and Last Position of Element in Sorted Array
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

int *searchRange(int *nums, int numsSize, int target, int *returnSize)
{

    int start = 0;
    int end = numsSize - 1;

    int first = -1;
    int last = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    start = 0;
    end = numsSize - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    int *result = new int[2];

    result[0] = first;
    result[1] = last;

    *returnSize = 2;
    return result;
}

int main()
{

    int nums[] = {5, 7, 7, 8, 8, 10};
    int target = 8;

    int *returnSize = new int;

    int *result = searchRange(nums, sizeof(nums) / sizeof(nums[0]), target, returnSize);

    for (int i = 0; i < *returnSize; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}