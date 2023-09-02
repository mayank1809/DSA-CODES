#include<bits/stdc++.h>
using namespace std;

void rvereseArray2nd(int arr[], int start, int end)
{
    if (start >= end)
    return;
      
    int temp = arr[start]; 
    arr[start] = arr[end];
    arr[end] = temp;
      
    // Recursive Function calling
    rvereseArray2nd(arr, start + 1, end - 1); 
} 
void reversearray(int arr[],int n)
{
for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Reverse array is"<<endl;
    //reversearray(arr,n);   //O(n)      reversing loop iterating loop from last to first
    rvereseArray2nd(arr,0,n);  //O(n)  swap
    cout<<endl;
    return 0;
}