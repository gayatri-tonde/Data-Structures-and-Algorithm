// problem statement: https://leetcode.com/problems/maximum-product-subarray/
// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest product and return the product.
//logic: we can find the maximum product subarray by calculating the prefix and suffix products.  
// Time complexity: O(n), where n is the number of elements in the array.
#include<iostream>
#include<climits>
using namespace std;

int largestProduct(int *nums, int n){
    int maxProd=INT_MIN;
    //int n= nums.size();
    int pref= 1,  suf=1, prod=1;
    for (int i=0;i<n;i++){
        if (pref==0) pref=1;
        if (suf==0) suf=1;
        pref=pref * nums[i];
        suf = suf * nums[n-i-1];
        maxProd=max(maxProd, max(pref, suf));
    }
    return maxProd;
}
int main(){
    int nums[]={2,3,-2,4};
    int n=sizeof(nums)/sizeof(int);
    cout<<largestProduct(nums, n);   
    return 0;
}