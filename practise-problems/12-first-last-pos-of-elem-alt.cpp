#include <iostream>
#include <vector>

using namespace std;

// Leetcode 34
// Find First and Last Position of Element in Sorted Array

vector<int> searchRange(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    int first = -1;
    int last = -1;

    // Find First Occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            end = mid - 1; // move left
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

    // Reset for second binary search
    start = 0;
    end = nums.size() - 1;

    // Find Last Occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            start = mid + 1; // move right
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

    return {first, last};
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};

    int target = 8;

    vector<int> result = searchRange(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]";

    return 0;
}