#include <iostream>
#include <climits>
using namespace std;

int maxSum = INT_MIN;
void bruteForce(int* arr, int n)
{
    // brute force method  T=O(n3)
    // space complexity is O(1) as no extra space is used
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int sum = 0;
            for (int i = start; i <= end; i++)
            {
                sum = sum + arr[i];
            }
            cout << sum << ",";
            maxSum = max(maxSum, sum);
        }
        cout << endl;
    }
    cout << "max sum is: " << maxSum;

}
void optimalBruteForce(int* arr, int n)
{
    // optimal brute force    T=O(n2)
    // space complexity is O(1) as no extra space is used
    for (int start = 0; start < n; start++)
    {
        int sum = 0;
        for (int end = start; end < n; end++)
        {
            sum = sum + arr[end];
            cout << sum << ",";
            maxSum = max(maxSum, sum);
        }
        cout << endl;
    }
    cout << "max sum is: " << maxSum;
}
void kadanesAlgorithm(int* arr, int n)
{
    // Kadanes algorithm T=O(n)
    // space complexity is O(1) as no extra space is used
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxSum=max(sum,maxSum);
        if (sum<0)
        {
            sum=0;
        }
        
    }
    cout<<"maximum is:"<<maxSum<<endl;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    //bruteForce(arr, n);
    //optimalBruteForce(arr, n);
    kadanesAlgorithm(arr, n);
    return 0;
}