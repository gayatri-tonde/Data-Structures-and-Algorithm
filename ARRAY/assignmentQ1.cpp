// Q1. Given an array of integers, check if there are any duplicates in the array.
// If there are duplicates, return true; otherwise, return false.
#include<iostream>
#include<algorithm>
using namespace std;
bool check (int *nums,int n){
    sort(nums,nums+n); 
    //sort(nums, nums+n) nums pointes the first element nums+n pionts element after the last element 
    //this is done because the range of sort() is to include the first element pointing and excluding the last element pointing
    //thus if nums+n is given then it includes all the n elements else it would have taken only n-1 elements

    for(int i=0;i<n-1;i++){  //n-1 so that when i=n then i+1=n+1 which is outside the array size
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;
}
int main()
{
    int nums[]={1,2,3,4,1,3,2,4};
    int n=sizeof(nums)/sizeof(int);
    cout<<check(nums,n);
    return 0;
}