#include <iostream>
#include <algorithm>
using namespace std;
int search(int arr[][3], int m, int n, int target)
{
    int counter=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (arr[i][j] == target){
                counter+=1;
            }
        }
    }
    cout<<counter;
    return 1;
}
int main()
{
    int arr[][3] = {{4, 7, 8}, {8, 8, 7}};
    int m = 2;
    int n = 3;
    int target = 1;
    search(arr, m, n, target);
    return 0;
}