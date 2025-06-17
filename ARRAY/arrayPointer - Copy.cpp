#include<iostream>
using namespace std;
void function(int arr[])//int arr[] or int *arr
{
    arr[0]=10;
    cout<<"In function arr[0]: "<<arr[0];
    cout<<endl;
}
int main()
{
    // array name can be converted as pointer 
    int arr[]={1,2,3,4,5};
    cout<<"arr: "<<arr<<endl;
    cout<<"*arr: "<<*arr<<endl;
    cout<<"*(arr+1): "<<*(arr+1)<<endl<<endl; //can also be accessed
    
    //arr is passed by reference
    cout<<"before fun arr[0]: "<<arr[0]<<endl;
    function(arr); 
    cout<<"outside fun arr[0]: "<<arr[0]<<endl<<endl;

    //increment and decrement using array pointer
    int *ptr=arr;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"++ptr: "<<++ptr<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"--ptr: "<<--ptr<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"ptr--: "<<ptr--<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"ptr++: "<<ptr++<<endl;
    cout<<"ptr: "<<ptr<<endl<<endl;

    //arithmetic operations using array pointer
    cout<<"ptr: "<<ptr<<endl;
    cout<<"ptr+3: "<<ptr+3<<endl;
    cout<<"*ptr+3: "<<*ptr+3<<endl;

    //pionter operations
    int arr1[]={1,2,3,4,5};
    int *ptr1=arr1;  //1
    int *ptr2=ptr1+3;  //4
    cout<<"ptr1: "<<ptr1<<endl;
    cout<<"ptr2: "<<ptr2<<endl;
   // cout<<"ptr1+ptr2: "<<ptr1+ptr2<<endl;  //invalid opertion
    cout<<"ptr1-ptr2: "<<ptr1-ptr2<<endl;   
    //gives the number of spaces(as per datatype) in between them. here 3 interger values can be stored.
    cout<<"ptr1>ptr2: "<<(ptr1>ptr2)<<endl;
    cout<<"arr1==ptr1: "<<(arr1==ptr1)<<endl;


    return 0;
}