#include<iostream>
using namespace std;
int main()
{   //printing all possible subarrays 
    // time complexity: O(n^3)
    // space complexity: O(1) as no extra space is used
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    for(int start=0;start<n;start++)
    {
        for (int end=start;end<n;end++)
        {
            for(int i=start;i<=end;i++)
            {
                cout<<arr[i];
            }cout<<", ";
        }cout<<endl;
    }
    return 0;
}