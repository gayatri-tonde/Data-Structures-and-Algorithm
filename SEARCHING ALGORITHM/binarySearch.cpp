#include <iostream>
using namespace std;
int binarySearch(int *arr, int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
         //when high and low are big values it exceeds beyond limit and causes interger overflow eg:10000+8000=18000
         //high-low calculates distance between them and /2 finds the mid value 10000-8000/2=1000 
         // low+  gives the mid value 8000+1000=9000
         // (high-low)/2 only gives the offset or distance between them and not the midvalue of array if it is big in size  or high and low values differ

        if (arr[mid] == key)
        {
            cout << mid;
            return 0;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        
    }return -1;
    // time complexity: O(log n) because we are halving the search space in each iteration 
    //space complexity: O(1) as no extra space is used
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(int);

    binarySearch(arr, n, 70);
    return 0;
}