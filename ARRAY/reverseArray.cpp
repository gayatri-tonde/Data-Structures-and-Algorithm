 #include<iostream>
 using namespace std;
 int reverseWith(int *arr,int n) // with extra space 
 {
    // this function will reverse the array using an extra space of O(n)
    for(int i=n-1;i>=0;i--)
    {
        int temp=arr[i];
        cout<<temp<<" "; 
    }
    cout<<endl;
 }
 int reverseWithout(int *arr, int n) //without extra space
 {
    // this function will reverse the array without using any extra space with time complexity O(n) and space complexity O(1)
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }
 int main()
 {
    int arr[]={2,3,4,5};
    int n= sizeof(arr)/sizeof(int);
    reverseWith(arr, n);
    reverseWithout(arr, n);
    return 0;
 }