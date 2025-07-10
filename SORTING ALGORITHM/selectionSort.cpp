// Selection sort is a simple sorting algorithm that divides the input list into two parts: a sorted and an unsorted part. It repeatedly selects the smallest (or largest, depending on the order) element from the unsorted part and moves it to the end of the sorted part.
// Time complexity: O(n^2)
// Space complexity: O(1)
#include <iostream>
#include <ostream>
using namespace std;
void selectionSort(int *nums, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[minIdx])
            {
                minIdx = j;
            }
        }
        swap(nums[i], nums[minIdx]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    int nums[] = {4, 8, 2, 7, 6, 5, 3, 1};
    int n = sizeof(nums) / sizeof(int);
    selectionSort(nums, n);
    return 0;
}