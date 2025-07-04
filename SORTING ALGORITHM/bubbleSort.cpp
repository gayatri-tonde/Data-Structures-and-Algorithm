// Bubble sort is method in which the largest element is moved to the end of the array in each iteration.
// Time complexity : O(n^2) in worst case and average case, O(n) in best case when the array is already sorted.
// Space complexity : O(1) as no extra space is used.
#include <iostream>
using namespace std;
int bubbleSort(int *nums, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap= false; // To optimize the algorithm, we can use a flag to check if any swap was made
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                isSwap= true; // If a swap is made, set the flag to true
            }
        }
        if (!isSwap) // If no swaps were made, the array is already sorted
        {
            return; // Exit the loop early
        }
    }
    return 0;
}   

int main()
{
    int nums[]={5,1,4,2,0};
    int n = sizeof(nums) / sizeof(int);
    bubbleSort(nums, n);
    return 0;
}