// Insertion sort is method in which the smallest element is selected and placed at the beginning of the array.
// Time complexity: O(n^2)
// Space complexity: O(1)
#include <iostream>
using namespace std;
void insertionSort(int *nums, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = nums[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (temp < nums[j])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    int nums[] = {5, 4, 1, 3, 2};
    int n = sizeof(nums) / sizeof(int);
    insertionSort(nums, n);
    return 0;
}