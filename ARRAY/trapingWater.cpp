#include<iostream>
using namespace std;
int trap(int *heights, int n){
    int leftMax[20000], rightMax[20000];
    leftMax[0]=heights[0];   //initializing with INT_MIN will give +ve value when subracted due to bit manupalation
    rightMax[n-1]=heights[n-1];
    // leftMax[i] will store the maximum height to the left of each index i
    // rightMax[i] will store the maximum height to the right of each index i
    for(int i=1;i<n;i++){
        leftMax[i]=max( heights[i-1],leftMax[i-1]);
    } 

    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(heights[i+1],rightMax[i+1]);
    }
    
    int trappedWater=0;
    for (int i=0;i<n;i++){
        int currWater=min(leftMax[i],rightMax[i])-heights[i];
        if (currWater>0){
            trappedWater+=currWater;
        }
    }
    return trappedWater;
    // time complexity: O(n)
    // space complexity: O(n) due to leftMax and rightMax arrays
}
int main()
{
    int heights[7]={4,2,0,6,3,2,5};
    int n=sizeof(heights)/sizeof(int);
    cout<<trap(heights,n);
    return 0;
}