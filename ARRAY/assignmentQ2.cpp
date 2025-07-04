// check notes for understanding the problem
// Problem: Search in Rotated Sorted Array
// Given an integer array nums sorted in ascending order, and an integer target,
// write a function to search target in nums. If target exists, then return its index.
// Otherwise, return -1.

#include <iostream>
using namespace std;
int binarySearch(int *nums, int n, int target)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low < high)
    {
        mid = low + ((high - low) / 2);
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[low] <= nums[mid])
        {
            if (target < nums[mid] && target >= nums[low])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (target > nums[mid] && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1; // Target not found
}
int main()
{
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(nums) / sizeof(int);
    int target = 3;
    cout << binarySearch(nums, n, target);
    return 0;
}