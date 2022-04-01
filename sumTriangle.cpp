//https://www.geeksforgeeks.org/sum-triangle-from-array/

#include <bits/stdc++.h>
using namespace std;

void sumTriangle(int arr[], int n)
{
    if(n==0)
        return;
    int arr2[n-1];
    for(int i=0; i<n-1; i++)
        arr2[i] = arr[i]+arr[i+1];
    sumTriangle(arr2, n-1);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {
	vector<int> v;
	int n;  
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
        cin>>arr[i];
	sumTriangle(arr, n);
	return 0;
}
