#include<bits/stdc++.h>
using namespace std;

int binary(int arr[], int left, int right, int val)
{
    if(left<=right) {
        int mid = left+(right-left)/2;
        if(arr[mid]==val)
            return mid;
        if(arr[mid]<val)
            return binary(arr, mid+1, right, val);
        return binary(arr, left, mid-1, val);
    }
    return -1;
}

int main()
{
    int n,val; 
    cin>>n;
    cin>>val;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<binary(arr,0,n-1,val);
    return 0;
}
