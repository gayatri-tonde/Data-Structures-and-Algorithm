#include <iostream>
using namespace std;
int Search(int arr[][4], int m, int n, int target)
{
    for (int i = 0; i < m; i++)
    {
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int mid = low + ((high - low) / 2);
            if (arr[i][mid] == target)
            {
                cout << "target found at arr[" << i << "][" << mid << "]" << endl;
                return 1;
            }
            else if (arr[i][mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}
int staircase(int arr[][4], int m, int n, int target)
{
    int i = 0;
    int j = n - 1;
    while (i < m || j >= 0)
    {
        if (arr[i][j] == target)
        {
            cout << "target found ";
            return 1;
        }
        else if (arr[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return -1;
}
int main()
{
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};
    int m = 4, n = 4;
    int target = 33;
    Search(arr, m, n, target);
    staircase(arr, m, n, target);
    return 0;
}