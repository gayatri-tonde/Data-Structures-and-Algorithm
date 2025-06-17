#include<iostream>
#include <climits>
using namespace std;
void Profit(int *prices,int n){
    int minPrice=INT_MAX;
    int maxProfit=0;
    int minPrice=INT_MAX;
        int maxProfit=0;

        int bestBuy[100000];
        bestBuy[0]=INT_MAX;
        for (int i=1;i<n;i++){
            bestBuy[i]=min(prices[i-1], bestBuy[i-1]);
        }
        for(int i=0;i<n;i++){
            maxProfit=max(maxProfit,prices[i]-bestBuy[i]);
        }
        cout<<maxProfit;
    
    // time complexity: O(n)
    // space complexity: O(n) due to bestBuy array
    // Note: The above code assumes that the prices array is not empty and contains at least one element.
}
int main(){
    int prices[]={1};
    int n=sizeof(prices)/sizeof(int);
    Profit(prices,n);
    return 0;
}