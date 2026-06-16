#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            count++;
        }
    }

    return count;
}

int main()
{

    int arr[] = {0, 1, 2, 2, 3, 0, 4, 2};

    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));

    int val = 2;

    cout << removeElement(nums, val) << endl;

    return 0;
}