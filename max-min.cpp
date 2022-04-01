//https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/

#include <bits/stdc++.h>
using namespace std;

int mx=INT_MIN, mn=INT_MAX; 
void maxmin(vector<int> &v, int n, int pos) {
    if(pos==n)
        return; 
    mx = max(mx, v[pos]);
    mn = min(mn, v[pos]); 
    maxmin(v,n,pos+1);
}
int main() {
	vector<int> v;
	int n,a;  
	cin>>n;
	for(int i=0; i<n; i++)
	{
	    cin>>a;
	    v.push_back(a);
	}
	maxmin(v,v.size(), 0);
	cout<<"Max="<<mx<<endl;
	cout<<"Min="<<mn<<endl;
	return 0;
}
