#include <iostream>
using namespace std;
void diagonalSum(int arr[][3], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }

            else if (j == n - i - 1)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << sum;
}
int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int m = 3, n = 3;
    diagonalSum(arr, m, n);
    return 0;
}