#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n)
{
    if(n<2)
        return 1;
    if(arr[n-1]<arr[n-2])
        return 0;
    return sorted(arr,n-1);
}

int main()
{
    int n,ele;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(sorted(arr, n))
    cout<<"sorted";
    else
    cout<<"not sorted";

    return 0;
}
