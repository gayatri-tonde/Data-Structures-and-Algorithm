#include<iostream>
using namespace std;
int linearSearch (int *arr, int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<< i;
        }
    }
    return -1;

    // time complexity: O(n) as we are iterating through all elements
    // space complexity: O(1) as no extra space is used
}
int main()
{
    int arr[]={3,4,7,9};
    int n= sizeof(arr)/sizeof(int);
    // int key=9;
    linearSearch(arr, n, 9);
    // cout<<n;
    // cout<<arr[1];
    return 0;
}